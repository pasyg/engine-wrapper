// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <cstdint>

namespace engine
{
namespace RBY
{
    static constexpr float PP_UP = 1.6;
    enum Move : std::uint8_t
    {
        None_,
        Pound,
        KarateChop,
        DoubleSlap,
        CometPunch,
        MegaPunch,
        PayDay,
        FirePunch,
        IcePunch,
        ThunderPunch,
        Scratch,
        ViseGrip,
        Guillotine,
        RazorWind,
        SwordsDance,
        Cut,
        Gust,
        WingAttack,
        Whirlwind,
        Fly,
        Bind,
        Slam,
        VineWhip,
        Stomp,
        DoubleKick,
        MegaKick,
        JumpKick,
        RollingKick,
        SandAttack,
        Headbutt,
        HornAttack,
        FuryAttack,
        HornDrill,
        Tackle,
        BodySlam,
        Wrap,
        TakeDown,
        Thrash,
        DoubleEdge,
        TailWhip,
        PoisonSting,
        Twineedle,
        PinMissile,
        Leer,
        Bite,
        Growl,
        Roar,
        Sing,
        Supersonic,
        SonicBoom,
        Disable,
        Acid,
        Ember,
        Flamethrower,
        Mist,
        WaterGun,
        HydroPump,
        Surf,
        IceBeam,
        Blizzard,
        Psybeam,
        BubbleBeam,
        AuroraBeam,
        HyperBeam,
        Peck,
        DrillPeck,
        Submission,
        LowKick,
        Counter,
        SeismicToss,
        Strength,
        Absorb,
        MegaDrain,
        LeechSeed,
        Growth,
        RazorLeaf,
        SolarBeam,
        PoisonPowder,
        StunSpore,
        SleepPowder,
        PetalDance,
        StringShot,
        DragonRage,
        FireSpin,
        ThunderShock,
        Thunderbolt,
        ThunderWave,
        Thunder,
        RockThrow,
        Earthquake,
        Fissure,
        Dig,
        Toxic,
        Confusion,
        Psychic,  // conflict with type 
        Hypnosis,
        Meditate,
        Agility,
        QuickAttack,
        Rage,
        Teleport,
        NightShade,
        Mimic,
        Screech,
        DoubleTeam,
        Recover,
        Harden,
        Minimize,
        Smokescreen,
        ConfuseRay,
        Withdraw,
        DefenseCurl,
        Barrier,
        LightScreen,
        Haze,
        Reflect,
        FocusEnergy,
        Bide,
        Metronome,
        MirrorMove,
        SelfDestruct,
        EggBomb,
        Lick,
        Smog,
        Sludge,
        BoneClub,
        FireBlast,
        Waterfall,
        Clamp,
        Swift,
        SkullBash,
        SpikeCannon,
        Constrict,
        Amnesia,
        Kinesis,
        SoftBoiled,
        HighJumpKick,
        Glare,
        DreamEater,
        PoisonGas,
        Barrage,
        LeechLife,
        LovelyKiss,
        SkyAttack,
        Transform,
        Bubble,
        DizzyPunch,
        Spore,
        Flash,
        Psywave,
        Splash,
        AcidArmor,
        Crabhammer,
        Explosion,
        FurySwipes,
        Bonemerang,
        Rest,
        RockSlide,
        HyperFang,
        Sharpen,
        Conversion,
        TriAttack,
        SuperFang,
        Slash,
        Substitute,
        Struggle,
    };

    inline constexpr uint8_t move_pp(Move move)
    {
        switch(move)
        {
            case None:          return 0  * PP_UP;
            case Pound:         return 35 * PP_UP;
            case KarateChop:    return 25 * PP_UP;
            case DoubleSlap:    return 10 * PP_UP;
            case CometPunch:    return 15 * PP_UP;
            case MegaPunch:     return 20 * PP_UP;
            case PayDay:        return 20 * PP_UP;
            case FirePunch:     return 15 * PP_UP;
            case IcePunch:      return 15 * PP_UP;
            case ThunderPunch:  return 15 * PP_UP;
            case Scratch:       return 35 * PP_UP;
            case ViseGrip:      return 30 * PP_UP;
            case Guillotine:    return 5  * PP_UP;
            case RazorWind:     return 10 * PP_UP;
            case SwordsDance:   return 30 * PP_UP;
            case Cut:           return 30 * PP_UP;
            case Gust:          return 35 * PP_UP;
            case WingAttack:    return 35 * PP_UP;
            case Whirlwind:     return 20 * PP_UP;
            case Fly:           return 15 * PP_UP;
            case Bind:          return 20 * PP_UP;
            case Slam:          return 20 * PP_UP;
            case VineWhip:      return 10 * PP_UP;
            case Stomp:         return 20 * PP_UP;
            case DoubleKick:    return 30 * PP_UP;
            case MegaKick:      return 5  * PP_UP;
            case JumpKick:      return 25 * PP_UP;
            case RollingKick:   return 15 * PP_UP;
            case SandAttack:    return 15 * PP_UP;
            case Headbutt:      return 15 * PP_UP;
            case HornAttack:    return 25 * PP_UP;
            case FuryAttack:    return 20 * PP_UP;
            case HornDrill:     return 5  * PP_UP;
            case Tackle:        return 35 * PP_UP;
            case BodySlam:      return 15 * PP_UP;
            case Wrap:          return 20 * PP_UP;
            case TakeDown:      return 20 * PP_UP;
            case Thrash:        return 20 * PP_UP;
            case DoubleEdge:    return 15 * PP_UP;
            case TailWhip:      return 30 * PP_UP;
            case PoisonSting:   return 35 * PP_UP;
            case Twineedle:     return 20 * PP_UP;
            case PinMissile:    return 20 * PP_UP;
            case Leer:          return 30 * PP_UP;
            case Bite:          return 25 * PP_UP;
            case Growl:         return 40 * PP_UP;
            case Roar:          return 20 * PP_UP;
            case Sing:          return 15 * PP_UP;
            case Supersonic:    return 20 * PP_UP;
            case SonicBoom:     return 20 * PP_UP;
            case Disable:       return 20 * PP_UP;
            case Acid:          return 30 * PP_UP;
            case Ember:         return 25 * PP_UP;
            case Flamethrower:  return 15 * PP_UP;
            case Mist:          return 30 * PP_UP;
            case WaterGun:      return 25 * PP_UP;
            case HydroPump:     return 5  * PP_UP;
            case Surf:          return 15 * PP_UP;
            case IceBeam:       return 10 * PP_UP;
            case Blizzard:      return 5  * PP_UP;
            case Psybeam:       return 20 * PP_UP;
            case BubbleBeam:    return 20 * PP_UP;
            case AuroraBeam:    return 20 * PP_UP;
            case HyperBeam:     return 5  * PP_UP;
            case Peck:          return 35 * PP_UP;
            case DrillPeck:     return 20 * PP_UP;
            case Submission:    return 25 * PP_UP;
            case LowKick:       return 20 * PP_UP;
            case Counter:       return 20 * PP_UP;
            case SeismicToss:   return 20 * PP_UP;
            case Strength:      return 15 * PP_UP;
            case Absorb:        return 20 * PP_UP;
            case MegaDrain:     return 10 * PP_UP;
            case LeechSeed:     return 10 * PP_UP;
            case Growth:        return 40 * PP_UP;
            case RazorLeaf:     return 25 * PP_UP;
            case SolarBeam:     return 10 * PP_UP;
            case PoisonPowder:  return 35 * PP_UP;
            case StunSpore:     return 30 * PP_UP;
            case SleepPowder:   return 15 * PP_UP;
            case PetalDance:    return 20 * PP_UP;
            case StringShot:    return 40 * PP_UP;
            case DragonRage:    return 10 * PP_UP;
            case FireSpin:      return 15 * PP_UP;
            case ThunderShock:  return 30 * PP_UP;
            case Thunderbolt:   return 15 * PP_UP;
            case ThunderWave:   return 20 * PP_UP;
            case Thunder:       return 10 * PP_UP;
            case RockThrow:     return 15 * PP_UP;
            case Earthquake:    return 10 * PP_UP;
            case Fissure:       return 5  * PP_UP;
            case Dig:           return 10 * PP_UP;
            case Toxic:         return 10 * PP_UP;
            case Confusion:     return 25 * PP_UP;
            case Psychic:       return 10 * PP_UP;
            case Hypnosis:      return 20 * PP_UP;
            case Meditate:      return 40 * PP_UP;
            case Agility:       return 30 * PP_UP;
            case QuickAttack:   return 30 * PP_UP;
            case Rage:          return 20 * PP_UP;
            case Teleport:      return 20 * PP_UP;
            case NightShade:    return 15 * PP_UP;
            case Mimic:         return 10 * PP_UP;
            case Screech:       return 40 * PP_UP;
            case DoubleTeam:    return 15 * PP_UP;
            case Recover:       return 20 * PP_UP;
            case Harden:        return 30 * PP_UP;
            case Minimize:      return 20 * PP_UP;
            case Smokescreen:   return 20 * PP_UP;
            case ConfuseRay:    return 10 * PP_UP;
            case Withdraw:      return 40 * PP_UP;
            case DefenseCurl:   return 40 * PP_UP;
            case Barrier:       return 30 * PP_UP;
            case LightScreen:   return 30 * PP_UP;
            case Haze:          return 30 * PP_UP;
            case Reflect:       return 20 * PP_UP;
            case FocusEnergy:   return 30 * PP_UP;
            case Bide:          return 10 * PP_UP;
            case Metronome:     return 10 * PP_UP;
            case MirrorMove:    return 20 * PP_UP;
            case SelfDestruct:  return 5  * PP_UP;
            case EggBomb:       return 10 * PP_UP;
            case Lick:          return 30 * PP_UP;
            case Smog:          return 20 * PP_UP;
            case Sludge:        return 20 * PP_UP;
            case BoneClub:      return 20 * PP_UP;
            case FireBlast:     return 5  * PP_UP;
            case Waterfall:     return 15 * PP_UP;
            case Clamp:         return 10 * PP_UP;
            case Swift:         return 20 * PP_UP;
            case SkullBash:     return 15 * PP_UP;
            case SpikeCannon:   return 15 * PP_UP;
            case Constrict:     return 35 * PP_UP;
            case Amnesia:       return 20 * PP_UP;
            case Kinesis:       return 15 * PP_UP;
            case SoftBoiled:    return 10 * PP_UP;
            case HighJumpKick:  return 20 * PP_UP;
            case Glare:         return 30 * PP_UP;
            case DreamEater:    return 15 * PP_UP;
            case PoisonGas:     return 40 * PP_UP;
            case Barrage:       return 20 * PP_UP;
            case LeechLife:     return 15 * PP_UP;
            case LovelyKiss:    return 10 * PP_UP;
            case SkyAttack:     return 5  * PP_UP;
            case Transform:     return 10 * PP_UP;
            case Bubble:        return 30 * PP_UP;
            case DizzyPunch:    return 10 * PP_UP;
            case Spore:         return 15 * PP_UP;
            case Flash:         return 20 * PP_UP;
            case Psywave:       return 15 * PP_UP;
            case Splash:        return 40 * PP_UP;
            case AcidArmor:     return 40 * PP_UP;
            case Crabhammer:    return 10 * PP_UP;
            case Explosion:     return 5  * PP_UP;
            case FurySwipes:    return 15 * PP_UP;
            case Bonemerang:    return 10 * PP_UP;
            case Rest:          return 10 * PP_UP;
            case RockSlide:     return 10 * PP_UP;
            case HyperFang:     return 15 * PP_UP;
            case Sharpen:       return 30 * PP_UP;
            case Conversion:    return 30 * PP_UP;
            case TriAttack:     return 10 * PP_UP;
            case SuperFang:     return 10 * PP_UP;
            case Slash:         return 20 * PP_UP;
            case Substitute:    return 10 * PP_UP;
            case Struggle:      return 10 * PP_UP;
        }
    }
} // namespace RBY
} // namespace engine