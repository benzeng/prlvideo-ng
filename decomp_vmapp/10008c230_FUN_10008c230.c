
void FUN_10008c230(long param_1,ulong param_2,int param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 in_RAX;
  uint uVar4;
  uint uVar5;
  undefined8 uStack_38;
  
  if (param_4 == '\0') {
    param_2 = param_2 >> 0xc;
    uVar5 = (param_3 + 0xfffU >> 0xc) + (uint)param_2;
    if ((uint)param_2 < uVar5) {
      uStack_38 = in_RAX;
      bVar2 = false;
      do {
        uVar4 = (uint)param_2;
        uStack_38 = CONCAT44(uVar4,(undefined4)uStack_38);
        bVar1 = bVar2;
        if ((*(long *)(param_1 + 200) != 0) &&
           ((*(uint *)(*(long *)(param_1 + 200) + (param_2 >> 5 & 0x7ffffff) * 4) >> (uVar4 & 0x1f)
            & 1) != 0)) {
          iVar3 = FUN_1007d74c0(*(undefined8 *)(param_1 + 0xd0),(long)&uStack_38 + 4,4);
          bVar1 = true;
          if (iVar3 != 4) {
            FUN_1008e3970("","vm",0,"Ring buffer overflow; dropping %x",uStack_38._4_4_);
            bVar1 = bVar2;
          }
        }
        param_2 = (ulong)(uVar4 + 1);
        bVar2 = bVar1;
      } while (uVar4 + 1 < uVar5);
      if (bVar1) {
        FUN_1000ace70(DAT_1011c3698,*(undefined8 *)(param_1 + 0xb0));
      }
    }
  }
  return;
}

