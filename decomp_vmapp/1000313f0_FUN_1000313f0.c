
undefined1 FUN_1000313f0(long param_1,int param_2,long param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 uVar5;
  
  uVar5 = 0;
  if ((0 < param_2) && (param_3 != 0)) {
    if ((*(uint *)(param_3 + 0x20) & 1) == 0) {
      pvVar1 = _malloc((long)param_2 << 5);
      if (pvVar1 == (void *)0x0) {
        FUN_1008e3970("DYNRESHOST","vm",0,"Cannot allocate memory for store DynRes data.");
        return 0;
      }
      ___bzero(pvVar1,(long)param_2 << 5);
      puVar4 = (undefined2 *)(param_3 + 0x1c);
      puVar2 = (undefined4 *)((long)pvVar1 + 0x1c);
      iVar3 = param_2;
      do {
        puVar2[-1] = *(undefined4 *)(puVar4 + -4);
        *puVar2 = *(undefined4 *)(puVar4 + -2);
        *(undefined2 *)(puVar2 + -6) = puVar4[-0xe];
        *(undefined2 *)((long)puVar2 + -0x16) = puVar4[-0xc];
        *(undefined2 *)(puVar2 + -7) = puVar4[-6];
        *(undefined2 *)(puVar2 + -3) = 0;
        *(undefined2 *)((long)puVar2 + -10) = *puVar4;
        puVar4 = puVar4 + 0x12;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_100030750(param_1,param_2,pvVar1,0);
      _free(pvVar1);
    }
    else {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("DYNRESHOST","vm",1,"Startup information. Host has hidpi display: %d",
                      *(uint *)(param_3 + 0x20) >> 1 & 1);
      }
      QMutex::lock();
      *(ushort *)(param_1 + 0x298) = *(ushort *)(param_3 + 0x20) & 2;
      *(undefined2 *)(param_1 + 0x29a) = *(undefined2 *)(param_3 + 0x1c);
      QMutex::unlock();
    }
    uVar5 = 1;
  }
  return uVar5;
}

