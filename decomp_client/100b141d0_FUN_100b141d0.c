
undefined8
FUN_100b141d0(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,undefined1 *param_5,
             long param_6)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  *param_5 = 0;
  if (param_4 != 0) {
    plVar1 = (long *)(param_6 + 8);
    uVar8 = 0;
    do {
      uVar3 = *(uint *)(param_3 + uVar8 * 4);
      if ((ulong)uVar3 != 0) {
        uVar6 = *(long *)(param_6 + 0x28) * (ulong)uVar3;
        if ((uVar6 - *(uint *)(param_6 + 0x30)) % (ulong)*(uint *)(param_6 + 0x34) != 0) {
          if ((uVar6 < *(ulong *)(param_6 + 0x18)) && (*(ulong *)(param_6 + 0x20) <= uVar6)) {
            FUN_100df99c0("","dimg",0,
                          "Error: BAT entry is not aligned on block size: %u. It\'s fatal, disk is corrupted. Try to run prl_disk_tool check for fixing consistency"
                         );
            return 0x80021033;
          }
          if ((*(ulong *)(param_6 + 0x18) <= uVar6) || (uVar6 < *(ulong *)(param_6 + 0x20))) {
            FUN_100df99c0("","dimg",0,
                          "Error: BAT entry is not aligned on block size: %u. It\'s fatal, but we continue"
                         );
            goto LAB_100b142d0;
          }
        }
        plVar4 = (long *)*plVar1;
        plVar7 = plVar1;
        if ((long *)*plVar1 != (long *)0x0) {
          do {
            while (plVar5 = plVar4, *(uint *)((long)plVar5 + 0x1c) < uVar3) {
              plVar2 = plVar5 + 1;
              plVar5 = plVar7;
              plVar4 = (long *)*plVar2;
              if ((long *)*plVar2 == (long *)0x0) goto LAB_100b142b3;
            }
            plVar4 = (long *)*plVar5;
            plVar7 = plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
LAB_100b142b3:
          if ((plVar5 != plVar1) && (*(uint *)((long)plVar5 + 0x1c) <= uVar3)) {
            *(int *)(param_3 + uVar8 * 4) = (int)plVar5[4];
            *param_5 = 1;
          }
        }
      }
LAB_100b142d0:
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_4);
  }
  return 0;
}

