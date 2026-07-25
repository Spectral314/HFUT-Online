# HFUT - Online  
在合肥工业大学-Online，找到你的培养方案！  

## 以下为美好的幻想

这是一个合肥工业大学本科生**希望自己能够**创作出来的一款养成类像素游戏，希望玩家能够重现进入合肥工业大学的一幕幕。  
通过对游戏的探索，找到自己的培养方案，实现自己在大学的自我教育。 :(

---

### 计划玩法

- 场景互动：角色可进入基于现实创作的合肥工业大学（翡翠湖校区）的场景。并与其中的NPC互动，找到在学校生活的原生体验。
- Lofi电台伴学：与游戏角色共同学习，类似于线上自习室。

- 在轻量、可联机、运行在移动端的状态下（抱歉可能不可能了）：实时报点，通过游戏告诉你的朋友你在校园的哪里等Ta；线上聊天，合工大学生的论坛。
  
---

### 项目结构（还差得远 orz）

HFUT Online/
├─ CMakeLists.txt
├─ main.cpp                # 程序入口、主游戏循环
├─ src/                    # 全部源代码
│  ├─ core/                # 底层核心引擎封装（通用工具）
│  │  ├─ game.h/cpp        # Game全局单例，管理游戏状态
│  │  ├─ resource_manager.h/cpp  # 贴图、音乐资源加载/缓存
│  │  ├─ input.h/cpp       # 输入封装
│  │  ├─ math_util.h/cpp   # 向量、插值工具函数
│  │  └─ save_system.h/cpp # 存档读写（JSON/二进制）
│  ├─ entity/              # 所有游戏实体（OOP）
│  │  ├─ character.h/cpp   # 角色基类（通用属性：等级、血量、好感、属性）
│  │  ├─ player.h/cpp      # 玩家（继承Character）
│  │  ├─ npc.h/cpp         # NPC、可互动角色
│  │  └─ item.h/cpp        # 道具、装备、消耗品
│  ├─ systems/             # 独立业务系统（养成核心）
│  │  ├─ growth_system.h/cpp   # 升级、属性成长、养成演算
│  │  ├─ relationship_system.h/cpp # 好感度、人际关系
│  │  ├─ inventory.h/cpp       # 背包系统
│  │  ├─ shop.h/cpp            # 商店交易
│  │  └─ quest_system.h/cpp    # 任务系统
│  ├─ ui/                  # 所有界面
│  │  ├─ ui_base.h/cpp     # UI基础组件（按钮、文本框）
│  │  ├─ main_menu.h/cpp
│  │  ├─ inventory_ui.h/cpp
│  │  └─ character_ui.h/cpp
│  ├─ scene/               # 场景、地图
│  │  ├─ scene.h/cpp       # 场景基类
│  │  ├─ town_scene.h/cpp
│  │  └─ battle_scene.h/cpp
│  └─ data/                # 静态配置数据（表格）
│     ├─ table_character.h
│     ├─ table_item.h
│     └─ table_skill.h
├─ resources/              # 图片、音效、字体、配置json
│  ├─ textures/
│  ├─ audio/
│  ├─ font/
│  └─ config/
└─ raylib/                 # raylib源码（你本地依赖