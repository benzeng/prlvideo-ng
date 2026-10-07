
undefined8 * FUN_100569540(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = **(long **)(param_1 + 0x1128);
  uVar6 = *(long *)(lVar3 + 0x60) + 0xffffffff;
  local_38 = lVar1;
  lVar3 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar3 + 0x40) +
                                            ((uVar6 & 0xffffffff) + *(long *)(lVar3 + 0x58) >> 9) *
                                            8) +
                                  ((ulong)(uint)((int)*(long *)(lVar3 + 0x58) + (int)uVar6) & 0x1ff)
                                  * 8) + 0x140))();
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = FUN_1006a7720(lVar3);
  }
  lVar3 = **(long **)(param_1 + 0x1128);
  uVar6 = *(long *)(lVar3 + 0x60) + 0xffffffff;
  lVar3 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar3 + 0x40) +
                                            ((uVar6 & 0xffffffff) + *(long *)(lVar3 + 0x58) >> 9) *
                                            8) +
                                  ((ulong)(uint)((int)*(long *)(lVar3 + 0x58) + (int)uVar6) & 0x1ff)
                                  * 8) + 0x140))();
  if (lVar3 == 0) {
    FUN_1007d6870(local_48);
  }
  else {
    FUN_1006a76e0(local_48,lVar3);
  }
  if (iVar2 == 0) {
    *param_2 = -0x7fffffec;
LAB_10056967d:
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)FUN_10057e020(*(undefined8 *)(param_1 + 0x1150),iVar2,local_48,param_2);
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      for (puVar5 = *(undefined8 **)(param_1 + 0x1128); puVar5 != *(undefined8 **)(param_1 + 0x1130)
          ; puVar5 = puVar5 + 1) {
        iVar2 = (**(code **)(*(long *)*puVar5 + 0x38))((long *)*puVar5,puVar4);
        *param_2 = iVar2;
        if (iVar2 < 0) {
          FUN_1007dade0(*puVar4);
          operator_delete(puVar4);
          goto LAB_10056967d;
        }
      }
      *param_2 = 0;
      puVar5 = puVar4;
    }
  }
  if (lVar1 == local_38) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

