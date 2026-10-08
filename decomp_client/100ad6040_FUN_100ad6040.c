
void FUN_100ad6040(long param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  lVar2 = *(long *)(lVar3 + 0x10);
  if (*(int *)(lVar3 + lVar2) == 1) {
    cVar1 = FUN_100ad60a0(param_1,param_3,lVar3 + lVar2);
    if (cVar1 == '\0') {
      return;
    }
    lVar3 = *param_2;
    lVar2 = *(long *)(lVar3 + 0x10);
  }
  FUN_100acb230(*(undefined8 *)(param_1 + 0x10),0x10,lVar2 + lVar3,*(undefined4 *)(lVar3 + 4));
  return;
}

