
undefined1 FUN_1000ba3d0(long param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  long *local_50;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + 0x48);
  iVar5 = 0;
  if (*(int *)(lVar1 + 0x14) != 0x4e46) goto LAB_1000ba59e;
  if ((*(int *)(lVar1 + 0x28) == 0) || (iVar5 = **(int **)(lVar1 + 0x30), -1 < iVar5)) {
    FUN_1002a9880(*(undefined8 *)(param_1 + 0x1a38));
    cVar2 = FUN_10008ac10(*(undefined8 *)(param_1 + 0x1940),param_1);
    if (cVar2 == '\0') {
      FUN_1002aece0(*(undefined8 *)(param_1 + 0x1a38));
      FUN_1002af430(*(undefined8 *)(param_1 + 0x1a38),*(undefined4 *)(param_1 + 0x1abc));
      iVar5 = -0x7ffdfffb;
      FUN_1000d0630(*(undefined8 *)(param_1 + 0x109c8),0x80020005);
      *(undefined1 *)(*(long *)(param_1 + 0x1940) + 0xd8) = 1;
      goto LAB_1000ba486;
    }
    FUN_10008ec80(param_1,0xc);
    *(undefined4 *)(param_1 + 0x1948) = 6;
  }
  else {
LAB_1000ba486:
    if (DAT_1011c36a0 == '\0') {
      FUN_1000a78a0(param_1,0);
      FUN_1000a7ae0(param_1,0,0);
      uVar4 = DAT_1011c3650;
      local_48 = (void *)0x0;
      pvStack_40 = (void *)0x0;
      local_38 = 0;
      plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_50 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        *(undefined4 *)(plVar3 + 1) = 1;
        plVar3[2] = 0;
        *plVar3 = (long)&PTR_FUN_100bef0d0;
        local_50 = plVar3;
      }
      FUN_100063770(uVar4,0x186b4,0,&local_48,0xbbb,&local_50);
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar1 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
      if (local_48 != (void *)0x0) {
        if (pvStack_40 != local_48) {
          pvStack_40 = (void *)((~((long)pvStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U)
                               + (long)pvStack_40);
        }
        operator_delete(local_48);
      }
      uVar4 = 0xe;
    }
    else {
      FUN_10008fa70(param_1,0x4e4a);
      uVar4 = 4;
    }
    FUN_10008ec80(param_1,uVar4);
  }
  FUN_10008f760(param_1,iVar5);
  FUN_10008f910(param_1,iVar5);
  iVar5 = 1;
LAB_1000ba59e:
  return (char)iVar5;
}

