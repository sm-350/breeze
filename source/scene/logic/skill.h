﻿/*
* breeze License
* Copyright (C) 2015 - 2016 YaweiZhang <yawei.zhang@foxmail.com>.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef _SKILL_H_
#define _SKILL_H_
#include "entity.h"

class Scene;
using ScenePtr = std::shared_ptr<Scene>;
class Skill : public std::enable_shared_from_this<Skill>
{
    std::weak_ptr<Scene> _scene;
public:
    Skill();
    ~Skill();
    void init(std::weak_ptr<Scene> scene);
    void update();

    //普攻的寻敌
    void selectFoe(ScenePtr scene, EntityPtr caster, bool onlyCancelCheck, bool change);
    bool isOutCD(EntityPtr caster, const EntitySkillInfo & skill, const DictSkill & dict);
    bool updateSkillPos(ScenePtr scene, EntityPtr caster, EntitySkillInfoPtr skill, const DictSkill & dictSkill);
    bool useSkill(ScenePtr scene, EntityID casterID, ui64 skillID, const EPosition & dst, ui16 foeFirst);
    bool useSkill(ScenePtr scene, EntityID casterID, ui64 skillID);

    bool triggerSkill(ScenePtr scene, EntityPtr caster, EntitySkillInfoPtr skill, const DictSkill & dictSkill);
    bool attack(ScenePtr scene, EntityPtr caster, EntitySkillInfoPtr skill, const DictSkill & dictSkill);
    

    bool damage(ScenePtr scene, EntityPtr caster, EntitySkillInfoPtr skill, const DictSkill & dictSkill, std::vector<std::pair<EntityPtr, double>> & targets);
    bool addBuff();
    bool cleanBuff();
};

using SkillPtr = std::shared_ptr<Skill>;




#endif
