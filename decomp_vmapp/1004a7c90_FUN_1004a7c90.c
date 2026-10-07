
void FUN_1004a7c90(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  
  lVar2 = *param_2;
  if (*(uint *)(lVar2 + 4) < 0x34) {
    return;
  }
  lVar3 = *(long *)(lVar2 + 0x10);
  iVar1 = *(int *)(lVar3 + 0x20 + lVar2);
  if (iVar1 == 3) {
    uVar7 = 0xf0000003;
  }
  else {
    uVar7 = 0xf000001c;
    if (iVar1 == 1) {
      uVar6 = *(uint *)(lVar2 + 4) - 0x34;
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      puVar4 = (undefined4 *)FUN_1002a6010(uVar7);
      *puVar4 = 0x20000;
      puVar4[1] = 9;
      puVar4[2] = 0;
      puVar4[3] = uVar6 & 0xffffff;
      lVar5 = FUN_1002a6120(uVar7,1,1);
      uVar7 = 0xf0000009;
      if (uVar6 <= *(uint *)(lVar5 + 8)) {
        uVar7 = 0;
        FUN_1002a5a50(lVar5,0,lVar3 + 0x34 + lVar2,uVar6);
        *(uint *)(lVar5 + 0x10) = uVar6;
      }
    }
  }
  FUN_1002a5590(*(undefined8 *)(DAT_1011c3698 + 0x1a28),*(undefined8 *)(param_1 + 0x10),uVar7);
  return;
}

