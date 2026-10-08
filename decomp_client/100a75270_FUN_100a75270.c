
bool FUN_100a75270(long param_1,long param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  undefined4 local_34;
  
  uVar7 = (undefined4)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_100aad010(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  local_34 = 0;
  if (((*(int *)(lVar2 + 0x68) == 2) && (*(char *)(lVar2 + 0x370) != '\0')) &&
     (uVar5 = FUN_100be45f0(*(undefined8 *)(lVar2 + 0x328)), (uVar5 & 0x3000) == 0)) {
    cVar3 = FUN_100a90340(lVar2,uVar1,param_2,param_3,uVar4,0,param_1 + 0x30);
  }
  else {
    cVar3 = FUN_100a79740(lVar2,uVar1,param_2,param_3,&local_34,1,CONCAT44(uVar7,uVar4),0,
                          param_1 + 0x30);
  }
  if (param_4 != (int *)0x0) {
    iVar6 = 0;
    if (cVar3 != '\0') {
      iVar6 = param_3;
    }
    *param_4 = iVar6;
  }
  if (cVar3 != '\0') {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_3;
  }
  return cVar3 != '\0';
}

