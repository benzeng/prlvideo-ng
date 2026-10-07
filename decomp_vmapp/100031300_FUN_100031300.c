
undefined1 FUN_100031300(undefined8 param_1,int param_2,long param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  
  uVar5 = 0;
  if ((0 < param_2) && (param_3 != 0)) {
    pvVar1 = _malloc((long)param_2 << 5);
    if (pvVar1 == (void *)0x0) {
      uVar5 = 0;
      FUN_1008e3970("DYNRESHOST","vm",0,"Cannot allocate memory for store DynRes data.");
    }
    else {
      ___bzero(pvVar1,(long)param_2 << 5);
      puVar4 = (undefined4 *)(param_3 + 0x18);
      puVar2 = (undefined4 *)((long)pvVar1 + 0x1c);
      iVar3 = param_2;
      do {
        puVar2[-1] = puVar4[-1];
        *puVar2 = *puVar4;
        *(undefined2 *)(puVar2 + -6) = *(undefined2 *)(puVar4 + -6);
        *(undefined2 *)((long)puVar2 + -0x16) = *(undefined2 *)(puVar4 + -5);
        *(undefined2 *)(puVar2 + -7) = *(undefined2 *)(puVar4 + -2);
        *(undefined2 *)(puVar2 + -3) = 0;
        *(undefined2 *)((long)puVar2 + -10) = 0;
        puVar4 = puVar4 + 7;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_100030750(param_1,param_2,pvVar1,0);
      _free(pvVar1);
      uVar5 = 1;
    }
  }
  return uVar5;
}

