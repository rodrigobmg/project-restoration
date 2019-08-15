#pragma once

#include "common/types.h"
#include "game/actor.h"
#include "game/as.h"

namespace game {
class Collision;
class GlobalContext;
}

namespace game::act {

struct BossOdolwa : Actor {
  enum class ChargeCommand : u8 {
    // Charge attack.
    DanceThrust = 0,
    // Jump.
    Jump = 1,
    // Spin attack (aka "sword roll").
    Spin = 2,
    // Used when Deku Link is flying towards Odolwa.
    LookAtDekuLink = 4,
  };

  enum class InvokeCommand : u8 {
    Bugs = 0,
    Rocks = 1,
    Fire = 2,
  };

  u16 time_since_start;
  u8 cycle_damage;
  u8 cycle_life;
  int call_bug_timer;
  u8 status;
  char field_201[1];
  u16 timer;
  u16 taunting_timer;
  u8 gap_206[2];
  float field_208;
  float field_20C;
  u16 invincibility_timer;
  u8 gap_212[3];
  u8 field_215;
  u8 command;
  u8 gap_217;
  u32 object_stuff;
  as::ActorUtil actor_util;
  u8 gap_2A8[160];
  float anim_duration;
  u8 gap_34C[4];
  float field_350;
  u8 gap_354[8];
  u8 field_35C;
  u8 gap_35D[3];
  u16 field_360;
  u8 gap_362;
  u8 call_bug_counter;
  float field_364;
  float field_368;
  u8 gap_36C[4];
  u32 field_370;
  u8 gap_374[2076];
  u32 field_B90;
  u8 gap_B94[1132];
  u32 field_1000;
  u8 gap_1004[976];
  void (*odolwa_calc)(BossOdolwa* self, GlobalContext* gctx);
  void (*odolwa_calc_prev)(BossOdolwa* self, GlobalContext* gctx);
  u32 field_13DC;
  u8 gap_3E0[24];
  // 3 entries
  Collision* collision2;
  int field_13FC;
  u8 gap_1400[236];
  u32 field_14EC;
  u8 gap_4F0[24];
  Collision* collision_shield;
  int field_150C;
  u8 gap_1510[76];
  u32 field_155C;
  u8 gap_560[24];
  // 11 entries
  Collision* collision;
  int field_157C;
  u8 gap_1580[876];
  u32 field_18EC;
  u8 gap_8F0[24];
  // 1 entry
  Collision* collision3;
  int field_190C;
  u8 gap_1910[156];
  u32 field_19AC;
  u8 gap_9B0[24];
  // 2 entries
  Collision* collision4;
  int field_19CC;
  u8 gap_9D0[156];
  Vec3 field_A6C[15];
  u32 intro_timer;
  u16 intro_state;
  u16 field_B26;
  u8 gap_B28[72];
  float field_1B70;
  u8 gap_1B74[84];
  float field_1BC8;
  u8 gap_1BCC[88];
  float field_1C24;
  u8 gap_1C28[16];
  u32 field_1C38;
  char field_1C3C[128];
  char field_1CBC[384];
  u32 field_1E3C;
  u8 gap_1E40[420];
  u32 field_1FE4;
  u8 gap_1FE8[24];
  u32 field_2000;
  u8 gap_2004[124];
  u32 field_2080;
  u8 gap_2084[152];
  int field_211C;
  u8 gap_120[492];
  s8 field_30C;
  s8 field_30C_delta;
  u8 gap_30E[2];
  float eye_scale;
  float eye_scale_2;
  u32 timer2;
  void* field_231C;
  u16** field_2320;
  u16** field_2324;
  u16** field_2328;
  u32 field_232C;
  int field_2330;
  int slashing_effect;
  int field_2338;
  u8 gap_33C[24];
  u32 deku_timer;
  u32 field_2358;
  char gap_235C[1432];
};
static_assert(sizeof(BossOdolwa) == 0x28F4);

}  // namespace game::act
