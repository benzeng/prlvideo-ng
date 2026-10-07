
void FUN_100359800(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_1002adb30(*param_1,param_1[1]);
  uVar1 = *(uint *)(param_2 + 8);
  puVar7 = (uint *)param_1[(ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) + 0x100d];
  while( true ) {
    if (puVar7 == (uint *)0x0) {
      return;
    }
    if (*puVar7 == uVar1) break;
    puVar7 = *(uint **)(puVar7 + 4);
  }
  lVar2 = *(long *)(puVar7 + 2);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar2 + 8);
  if (*(int *)(lVar3 + 8) == 0x1b) {
    return;
  }
  if ((*(ushort *)(lVar3 + 0xb0) & 0x40) != 0) {
    return;
  }
  local_48 = *(undefined4 *)(param_2 + 0xc);
  uStack_44 = *(undefined4 *)(param_2 + 0x10);
  uStack_40 = *(undefined4 *)(param_2 + 0x14);
  uStack_3c = *(undefined4 *)(param_2 + 0x18);
  local_38 = 0;
  local_34 = 1;
  uVar4 = param_1[5];
  uVar5 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar2 + 4));
  uVar6 = FUN_10032df00(*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 4));
  FUN_10035e890(uVar4,lVar3,&local_48,uVar5,uVar6);
  return;
}

