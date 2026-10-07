
undefined1
FUN_10042a7e0(long param_1,undefined8 *param_2,undefined4 param_3,char *param_4,char param_5)

{
  long lVar1;
  ushort uVar2;
  char cVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined1 local_908 [1024];
  undefined1 local_508 [1152];
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  long local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_70 = param_1 + 8;
  local_68 = *(int *)(param_1 + 0x10);
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  pcVar4 = _strrchr(param_4,0x2f);
  pcVar6 = "<Unknown>";
  if (pcVar4 != (char *)0x0) {
    pcVar6 = pcVar4 + 1;
  }
  sVar5 = _strlen(pcVar6);
  local_40 = CONCAT44(3,(undefined4)local_40);
  cVar3 = FUN_100422630(&local_70,sVar5 + 0x19);
  if (cVar3 != '\0') {
    cVar3 = FUN_100422730(local_70,local_68 + 0x18,pcVar6,sVar5);
    if (cVar3 != '\0') {
      *(ulong *)((long)param_2 + 0x4c) = CONCAT44(local_68,(undefined4)local_60);
      local_58 = CONCAT44(local_58._4_4_,0x53445352);
      local_48 = local_48 & 0xffffffff;
      if (param_5 == '\0') {
LAB_10042a937:
        FUN_10042adf0(local_908,param_4);
        cVar3 = FUN_10042aee0(local_908,param_3,0xffffffff,&local_88);
      }
      else {
        FUN_10042b2c0(local_508,param_4,*param_2,*(undefined4 *)(param_2 + 1));
        cVar3 = FUN_10042b760(local_508,param_3,0xffffffff,&local_88);
        if (cVar3 == '\0') {
          cVar3 = FUN_10042be50(local_508,param_3,0xffffffff,&local_88);
        }
        FUN_10042b3a0(local_508);
        if (cVar3 == '\0') goto LAB_10042a937;
      }
      uVar7 = 1;
      if (cVar3 != '\0') {
        local_58 = CONCAT44((uint)(CONCAT44(uStack_84,local_88) >> 8) & 0xff00 |
                            (local_88 & 0xff00) << 8 | local_88 << 0x18 | local_88 >> 0x18,
                            (undefined4)local_58);
        uVar2 = (ushort)((uint)uStack_84 >> 8);
        local_50._0_6_ =
             CONCAT15((char)((uint)local_80 >> 8),
                      CONCAT14((char)local_80,
                               CONCAT22((ushort)(byte)((uint)uStack_84 >> 0x18) | uVar2 & 0xff00,
                                        uVar2 & 0xff |
                                        (ushort)(CONCAT44(uStack_84,local_88) >> 0x18) & 0xff00)));
        local_50 = CONCAT17(uStack_7d,CONCAT16((char)((uint)local_80 >> 0x10),(undefined6)local_50))
        ;
        local_48 = CONCAT44(local_48._4_4_,uStack_7c);
      }
      goto LAB_10042aa0b;
    }
  }
  uVar7 = 0;
LAB_10042aa0b:
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (local_40._4_4_ != 2) {
    FUN_100422730(local_70,local_68,&local_58,0x18);
  }
  if (lVar1 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

