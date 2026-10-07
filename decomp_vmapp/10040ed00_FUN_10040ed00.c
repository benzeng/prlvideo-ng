
void FUN_10040ed00(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  
  lVar1 = *(long *)(param_1 + 0x68);
  *(uint *)(lVar1 + 0x68) = param_2 + *(int *)(lVar1 + 0x68) & *(uint *)(lVar1 + 0x70);
  if (*(char *)(param_1 + 0x30) == '\0') {
    lVar1 = *(long *)(param_1 + 8);
    iVar4 = *(int *)(lVar1 + 0x5c) -
            (*(int *)(lVar1 + 0x68) - *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70));
    if (iVar4 != 0) {
      FUN_1007d7180(*(long *)(param_1 + 8) + 0x5c,iVar4,&local_30,&local_24,&local_38,&local_28);
      iVar4 = local_24;
      cVar2 = FUN_10040ee10(param_1,local_30,&local_24);
      if (((cVar2 != '\0') && (local_24 == iVar4)) && (local_28 != 0)) {
        FUN_10040ee10(param_1,local_38,&local_28);
      }
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x68);
    uVar3 = *(int *)(lVar1 + 0x68) - *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70);
    FUN_1007d7180(*(long *)(param_1 + 8) + 0x5c,uVar3,&local_30,&local_24,&local_38,&local_28);
    lVar1 = *(long *)(param_1 + 0x68);
    *(uint *)(lVar1 + 100) = uVar3 + *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70);
    ___bzero(local_30,*(int *)(*(long *)(param_1 + 8) + 0x60) * local_24);
    ___bzero(local_38,*(int *)(*(long *)(param_1 + 8) + 0x60) * local_28);
    lVar1 = *(long *)(param_1 + 8);
    *(uint *)(lVar1 + 0x68) = local_28 + local_24 + *(int *)(lVar1 + 0x68) & *(uint *)(lVar1 + 0x70)
    ;
  }
  return;
}

