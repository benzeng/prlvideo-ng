
void FUN_100381180(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  void *pvVar5;
  int iVar6;
  undefined8 uVar7;
  void *local_38;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  iVar6 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x24) == 1) {
    uVar1 = uVar1 / (byte)(&DAT_100b3e3b7)[(ulong)param_3 * 8];
  }
  if ((iVar6 == 1) && (iVar6 = 1, (*(ushort *)(param_2 + 0xb0) & 2) != 0)) {
    uVar2 = *(uint *)(param_2 + 0x10);
    if (*(uint *)(param_2 + 0x10) < uVar1) {
      uVar2 = uVar1;
    }
    if (uVar2 <= *(uint *)(param_2 + 0x14)) {
      uVar2 = *(uint *)(param_2 + 0x14);
    }
    iVar6 = 0;
    for (uVar4 = (ulong)uVar2; (int)uVar4 != 0; uVar4 = uVar4 >> 1) {
      iVar6 = iVar6 + 1;
    }
  }
  uVar7 = 0xde0;
  switch(*(int *)(param_2 + 0x24)) {
  case 1:
    uVar7 = 0xde1;
    if (*(char *)(param_2 + 0xb4) == '\0') {
      uVar7 = 0x8c2a;
    }
    break;
  case 2:
    break;
  default:
    uVar7 = 0xde1;
    break;
  case 4:
    uVar7 = 0x9100;
    break;
  case 5:
    uVar7 = 0x806f;
    break;
  case 6:
    uVar7 = 0x8513;
    break;
  case 7:
    uVar7 = 0x8c18;
    break;
  case 8:
    uVar7 = 0x8c1a;
    break;
  case 9:
    uVar7 = 0x9102;
    break;
  case 10:
    uVar7 = 0x9009;
    if (*(uint *)(DAT_1011c8478 + 4) < 0x19a) {
      uVar7 = 0x8c1a;
    }
  }
  pvVar5 = operator_new(0xb0);
  uVar3 = FUN_10032df20(param_2);
  FUN_1003806d0(pvVar5,uVar3,iVar6,uVar7,param_3,uVar1,*(undefined4 *)(param_2 + 0x10),
                *(undefined4 *)(param_2 + 0x14),(*(ushort *)(param_2 + 0xb0) & 0x40) >> 6);
  local_38 = pvVar5;
  if (*(undefined8 **)(param_2 + 0x48) == *(undefined8 **)(param_2 + 0x50)) {
    FUN_10038d170(param_2 + 0x40,&local_38);
  }
  else {
    **(undefined8 **)(param_2 + 0x48) = pvVar5;
    *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 8;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  (*DAT_1011c5768)(*(undefined4 *)((long)pvVar5 + 0x14),*(undefined4 *)((long)pvVar5 + 0xc));
  FUN_100381460(param_1,param_2);
  (*DAT_1011c5768)(*(undefined4 *)((long)pvVar5 + 0x14),0);
  if (param_3 == 0x23) {
    pvVar5 = operator_new(0xb0);
    FUN_1003806d0(pvVar5,1,1,0xde1,0x30,uVar1,*(undefined4 *)(param_2 + 0x10),
                  *(undefined4 *)(param_2 + 0x14),0);
    uVar3 = FUN_100398aa0(0x23);
    *(undefined4 *)((long)pvVar5 + 0xa4) = uVar3;
    local_38 = pvVar5;
    if (*(undefined8 **)(param_2 + 0x48) == *(undefined8 **)(param_2 + 0x50)) {
      FUN_10038d170(param_2 + 0x40,&local_38);
    }
    else {
      **(undefined8 **)(param_2 + 0x48) = pvVar5;
      *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 8;
    }
    (*DAT_1011c5768)(*(undefined4 *)((long)pvVar5 + 0x14),*(undefined4 *)((long)pvVar5 + 0xc));
    FUN_100381460(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001003813a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5768)(*(undefined4 *)((long)pvVar5 + 0x14),0);
    return;
  }
  return;
}

