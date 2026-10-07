
void FUN_1000c19e0(long param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
  if (iVar1 == 6) {
    uVar3 = FUN_1002577c0();
    uVar5 = 0;
    uVar4 = 0;
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x28) != 0) {
      uVar4 = **(undefined4 **)(*(long *)(param_1 + 0x48) + 0x30);
    }
    cVar2 = FUN_100257850(uVar4);
    if ((2 < DAT_1011b55f8) && (cVar2 == '\x01')) {
      uVar5 = 0;
      FUN_1008e3970("","vm",3,"Boost VCPU%u priority (%u, %u)",*(undefined4 *)(param_1 + 0x110),
                    uVar3,uVar4);
    }
  }
  else {
    uVar5 = 0x80000275;
    if (iVar1 == 4) {
      FUN_10008ec80(param_1,8);
      uVar5 = 0;
    }
  }
  FUN_10008f910(param_1,uVar5);
  return;
}

