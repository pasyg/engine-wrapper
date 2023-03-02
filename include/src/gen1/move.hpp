#pragma once

#include <cstdint>

namespace engine
{
namespace RBY
{
    enum Move : std::uint8_t
    {
        None,
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
            case None:          return 0;
            case Pound:         return 35;
            case KarateChop:    return 25;
            case DoubleSlap:    return 10;
            case CometPunch:    return 15;
            case MegaPunch:     return 20;
            case PayDay:        return 20;
            case FirePunch:     return 15;
            case IcePunch:      return 15;
            case ThunderPunch:  return 15;
            case Scratch:       return 35;
            case ViseGrip:      return 30;
            case Guillotine:    return 5;
            case RazorWind:     return 10;
            case SwordsDance:   return 30;
            case Cut:           return 30;
            case Gust:          return 35;
            case WingAttack:    return 35;
            case Whirlwind:     return 20;
            case Fly:           return 15;
            case Bind:          return 20;
            case Slam:          return 20;
            case VineWhip:      return 10;
            case Stomp:         return 20;
            case DoubleKick:    return 30;
            case MegaKick:      return 5;
            case JumpKick:      return 25;
            case RollingKick:   return 15;
            case SandAttack:    return 15;
            case Headbutt:      return 15;
            case HornAttack:    return 25;
            case FuryAttack:    return 20;
            case HornDrill:     return 5;
            case Tackle:        return 35;
            case BodySlam:      return 15;
            case Wrap:          return 20;
            case TakeDown:      return 20;
            case Thrash:        return 20;
            case DoubleEdge:    return 15;
            case TailWhip:      return 30;
            case PoisonSting:   return 35;
            case Twineedle:     return 20;
            case PinMissile:    return 20;
            case Leer:          return 30;
            case Bite:          return 25;
            case Growl:         return 40;
            case Roar:          return 20;
            case Sing:          return 15;
            case Supersonic:    return 20;
            case SonicBoom:     return 20;
            case Disable:       return 20;
            case Acid:          return 30;
            case Ember:         return 25;
            case Flamethrower:  return 15;
            case Mist:          return 30;
            case WaterGun:      return 25;
            case HydroPump:     return 5;
            case Surf:          return 15;
            case IceBeam:       return 10;
            case Blizzard:      return 5;
            case Psybeam:       return 20;
            case BubbleBeam:    return 20;
            case AuroraBeam:    return 20;
            case HyperBeam:     return 5;
            case Peck:          return 35;
            case DrillPeck:     return 20;
            case Submission:    return 25;
            case LowKick:       return 20;
            case Counter:       return 20;
            case SeismicToss:   return 20;
            case Strength:      return 15;
            case Absorb:        return 20;
            case MegaDrain:     return 10;
            case LeechSeed:     return 10;
            case Growth:        return 40;
            case RazorLeaf:     return 25;
            case SolarBeam:     return 10;
            case PoisonPowder:  return 35;
            case StunSpore:     return 30;
            case SleepPowder:   return 15;
            case PetalDance:    return 20;
            case StringShot:    return 40;
            case DragonRage:    return 10;
            case FireSpin:      return 15;
            case ThunderShock:  return 30;
            case Thunderbolt:   return 15;
            case ThunderWave:   return 20;
            case Thunder:       return 10;
            case RockThrow:     return 15;
            case Earthquake:    return 10;
            case Fissure:       return 5;
            case Dig:           return 10;
            case Toxic:         return 10;
            case Confusion:     return 25;
            case Psychic:       return 10;
            case Hypnosis:      return 20;
            case Meditate:      return 40;
            case Agility:       return 30;
            case QuickAttack:   return 30;
            case Rage:          return 20;
            case Teleport:      return 20;
            case NightShade:    return 15;
            case Mimic:         return 10;
            case Screech:       return 40;
            case DoubleTeam:    return 15;
            case Recover:       return 20;
            case Harden:        return 30;
            case Minimize:      return 20;
            case Smokescreen:   return 20;
            case ConfuseRay:    return 10;
            case Withdraw:      return 40;
            case DefenseCurl:   return 40;
            case Barrier:       return 30;
            case LightScreen:   return 30;
            case Haze:          return 30;
            case Reflect:       return 20;
            case FocusEnergy:   return 30;
            case Bide:          return 10;
            case Metronome:     return 10;
            case MirrorMove:    return 20;
            case SelfDestruct:  return 5;
            case EggBomb:       return 10;
            case Lick:          return 30;
            case Smog:          return 20;
            case Sludge:        return 20;
            case BoneClub:      return 20;
            case FireBlast:     return 5;
            case Waterfall:     return 15;
            case Clamp:         return 10;
            case Swift:         return 20;
            case SkullBash:     return 15;
            case SpikeCannon:   return 15;
            case Constrict:     return 35;
            case Amnesia:       return 20;
            case Kinesis:       return 15;
            case SoftBoiled:    return 10;
            case HighJumpKick:  return 20;
            case Glare:         return 30;
            case DreamEater:    return 15;
            case PoisonGas:     return 40;
            case Barrage:       return 20;
            case LeechLife:     return 15;
            case LovelyKiss:    return 10;
            case SkyAttack:     return 5;
            case Transform:     return 10;
            case Bubble:        return 30;
            case DizzyPunch:    return 10;
            case Spore:         return 15;
            case Flash:         return 20;
            case Psywave:       return 15;
            case Splash:        return 40;
            case AcidArmor:     return 40;
            case Crabhammer:    return 10;
            case Explosion:     return 5;
            case FurySwipes:    return 15;
            case Bonemerang:    return 10;
            case Rest:          return 10;
            case RockSlide:     return 10;
            case HyperFang:     return 15;
            case Sharpen:       return 30;
            case Conversion:    return 30;
            case TriAttack:     return 10;
            case SuperFang:     return 10;
            case Slash:         return 20;
            case Substitute:    return 10;
            case Struggle:      return 10;
        }
    }
} // namespace RBY
} // namespace engine