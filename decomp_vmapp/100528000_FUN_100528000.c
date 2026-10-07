
undefined8
FUN_100528000(long *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
             undefined1 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  *param_6 = 0;
  uVar7 = *(uint *)(param_2 + 0x10) & 0x20;
  if ((uVar7 == 0) && ((*(byte *)(param_3 + 0x18) & 0x20) != 0)) {
    if (*(long *)(param_3 + 0x50) != 0) {
      param_1 = (long *)*param_1;
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x10))(param_1,*(long *)(param_3 + 0x50),0);
      }
      *(undefined8 *)(param_3 + 0x70) = 0;
      *(undefined8 *)(param_3 + 0x68) = 0;
      *(undefined8 *)(param_3 + 0x60) = 0;
      *(undefined8 *)(param_3 + 0x58) = 0;
      *(undefined8 *)(param_3 + 0x50) = 0;
      return 0;
    }
    return 0;
  }
  if (param_4 == (undefined8 *)0x0) {
    return 0;
  }
  if (uVar7 == 0) {
    return 0;
  }
  uVar1 = *(undefined4 *)param_4;
  uVar2 = *(undefined4 *)((long)param_4 + 4);
  uVar7 = *(uint *)(param_4 + 1);
  uVar3 = *(undefined4 *)((long)param_4 + 0x1c);
  uVar6 = *(undefined8 *)((long)param_4 + 0xc);
  uVar4 = *(undefined8 *)((long)param_4 + 0x14);
  lVar5 = *(long *)(param_3 + 0x50);
  if ((uVar7 & 8) == 0) {
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0x58);
      uVar7 = *(uint *)(param_3 + 0x60);
      local_40 = (undefined4)*(undefined8 *)(param_3 + 0x6c);
      uStack_3c = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x6c) >> 0x20);
      uStack_44 = (undefined4)((ulong)*(undefined8 *)(param_3 + 100) >> 0x20);
      uVar4 = *param_4;
      *(undefined8 *)(param_3 + 0x60) = param_4[1];
      *(undefined8 *)(param_3 + 0x58) = uVar4;
      *(undefined8 *)(param_3 + 0x58) = uVar6;
      *(uint *)(param_3 + 0x60) = *(uint *)(param_3 + 0x60) & 0xfffffff7 | uVar7 & 8;
      uVar6 = CONCAT44(local_40,uStack_44);
      *(ulong *)(param_3 + 0x70) = CONCAT44(*(undefined4 *)(param_3 + 0x74),uStack_3c);
      *(undefined8 *)(param_3 + 0x68) = uVar6;
      goto LAB_100528161;
    }
  }
  else if ((lVar5 != 0) && (param_1 = (long *)*param_1, param_1 != (long *)0x0)) {
    (**(code **)(*param_1 + 0x10))(param_1,lVar5,0);
  }
  *(undefined4 *)(param_3 + 0x58) = uVar1;
  *(undefined4 *)(param_3 + 0x5c) = uVar2;
  *(uint *)(param_3 + 0x60) = uVar7;
  *(undefined4 *)(param_3 + 0x74) = uVar3;
  *(undefined8 *)(param_3 + 0x6c) = uVar4;
  *(undefined8 *)(param_3 + 100) = uVar6;
  *(undefined8 *)(param_3 + 0x50) = param_5;
  *param_6 = 1;
LAB_100528161:
  return CONCAT71((int7)((ulong)uVar6 >> 8),1);
}

