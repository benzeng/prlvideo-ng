
undefined8 FUN_1000b66f0(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_40;
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x14) != 0x4e21) {
    return 0;
  }
  iVar3 = FUN_1000bdfc0(param_1);
  uVar5 = DAT_1011c3650;
  if (iVar3 < -0x7ffdffe9) {
    if ((iVar3 != -0x7ffffd8b) && (iVar3 != -0x7ffeffed)) {
LAB_1000b684c:
      cVar2 = FUN_100409070(param_1 + 0x10b0);
      if (cVar2 == '\0') goto LAB_1000b686d;
    }
LAB_1000b6861:
    FUN_10008f910(param_1,iVar3);
    uVar5 = 0xc;
  }
  else {
    if (iVar3 == -0x7ffdffe9) {
      FUN_1000c81f0(*(undefined8 *)(param_1 + 0x109c8),0);
    }
    else {
      if (iVar3 != 0) goto LAB_1000b684c;
      if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 2) != 0) {
        local_38 = (void *)0x0;
        pvStack_30 = (void *)0x0;
        local_28 = 0;
        plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_40 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          *(undefined4 *)(plVar4 + 1) = 1;
          plVar4[2] = 0;
          *plVar4 = (long)&PTR_FUN_100bef0d0;
          local_40 = plVar4;
        }
        FUN_100063770(uVar5,0x186ad,0,&local_38,0xbbb,&local_40);
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar4 = local_40 + 1;
          lVar1 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)(*local_40 + 0x10))();
          }
        }
        if (local_38 != (void *)0x0) {
          if (pvStack_30 != local_38) {
            pvStack_30 = (void *)((~((long)pvStack_30 + (-8 - (long)local_38)) & 0xfffffffffffffff8U
                                  ) + (long)pvStack_30);
          }
          operator_delete(local_38);
        }
      }
      if (*(char *)(*(long *)(param_1 + 0x109c8) + 0x1f8) != '\0') {
        iVar3 = 0;
        goto LAB_1000b6861;
      }
    }
LAB_1000b686d:
    FUN_10008f440(param_1);
    uVar5 = 1;
  }
  FUN_10008ec80(param_1,uVar5);
  return 1;
}

