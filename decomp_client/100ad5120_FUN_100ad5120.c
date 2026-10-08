
void FUN_100ad5120(long param_1,char param_2)

{
  long lVar1;
  Data *pDVar2;
  Data *pDVar3;
  QArrayData *local_68;
  Data *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_100adc1f0(&local_60);
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    pDVar3 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    pDVar2 = local_60;
    do {
      lVar1 = *(long *)pDVar3;
      if (param_2 == '\0') {
LAB_100ad51f4:
        FUN_100ace7a0(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(lVar1 + 8));
        pDVar2 = local_60;
      }
      else if ((*(ulong *)(lVar1 + 0x38) >> 0x20 != 0) || ((int)*(ulong *)(lVar1 + 0x38) != 0)) {
        local_68 = (QArrayData *)PTR_shared_null_1021e1288;
        FUN_100ad1790(&local_68,&local_58,*(undefined4 *)(lVar1 + 8));
        FUN_100ace560(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(lVar1 + 0x38),&local_68);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ad51f4;
          }
          QArrayData::deallocate(local_68,1,8);
        }
        goto LAB_100ad51f4;
      }
      pDVar3 = pDVar3 + 8;
    } while (pDVar3 != pDVar2 + (long)*(int *)(pDVar2 + 0xc) * 8 + 0x10);
  }
  *(undefined1 *)(param_1 + 0x978) = 0;
  FUN_100add420(*(undefined8 *)(param_1 + 0x9b8),0);
  FUN_100addd40(param_1 + 0x920);
  FUN_100adb3f0(param_1 + 0x100);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_60);
  }
  return;
}

