
int FUN_1002d6370(undefined8 *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  
  if (1 < DAT_1011c568c) {
    pcVar7 = "false";
    if (param_4 != 0) {
      pcVar7 = "true";
    }
    FUN_1008e3970("","USB",0,"[%s] SetAlternateInterface int_num %u, alt_set %u, set_cfg %s",
                  param_1 + 0x107,param_2,param_3,pcVar7);
  }
  cVar3 = (**(code **)(*(long *)*param_1 + 0x18))();
  iVar5 = 0;
  lVar9 = 9;
  if (cVar3 != '\0') {
    do {
      pvVar2 = (void *)param_1[lVar9];
      if ((pvVar2 != (void *)0x0) && (*(int *)((long)pvVar2 + 0xb0) == param_2)) {
        FUN_1002d7cd0(pvVar2);
        operator_delete(pvVar2);
        param_1[lVar9] = 0;
      }
      uVar10 = lVar9 - 7;
      lVar9 = lVar9 + 1;
    } while (uVar10 < 0xff);
    iVar4 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,param_2,param_3);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = FUN_1002d6600(param_1,param_2,param_3);
    }
  }
  *(undefined4 *)(param_1 + 0x10b) = 0xffffffff;
  uVar6 = 0xffffffff;
  lVar9 = 0;
  do {
    if (param_1[lVar9 + 9] != 0) {
      uVar1 = *(uint *)(param_1[lVar9 + 9] + 0x108);
      if (uVar1 <= uVar6) {
        uVar6 = uVar1;
      }
      *(uint *)(param_1 + 0x10b) = uVar6;
    }
    if (param_1[lVar9 + 10] != 0) {
      uVar1 = *(uint *)(param_1[lVar9 + 10] + 0x108);
      if (uVar1 <= uVar6) {
        uVar6 = uVar1;
      }
      *(uint *)(param_1 + 0x10b) = uVar6;
    }
    lVar9 = lVar9 + 2;
  } while (lVar9 != 0xfe);
  if (1 < DAT_1011c568c) {
    pcVar7 = "false";
    pcVar8 = "false";
    if (param_4 != 0) {
      pcVar8 = "true";
    }
    if (iVar5 != 0) {
      pcVar7 = "true";
    }
    FUN_1008e3970("","USB",0,
                  "[%s] SetInterface finished. int_num %u, alt_set %u, set_cfg %s, res %s",
                  param_1 + 0x107,param_2,param_3,pcVar8,pcVar7);
  }
  return iVar5;
}

