
QListData * FUN_100af7be0(QListData *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  Data *pDVar3;
  
  if (*(int *)(*param_2 + 0xc) != *(int *)(*param_2 + 8)) {
    pDVar3 = param_1->field0_0x0;
    if (*(uint *)(pDVar3 + 0xc) == *(uint *)(pDVar3 + 8)) {
      FUN_100af8d20(param_1,param_2);
    }
    else {
      if (*(uint *)pDVar3 < 2) {
        pvVar2 = (void *)QListData::append(param_1);
      }
      else {
        pvVar2 = (void *)FUN_10012ba90(param_1,0x7fffffff);
      }
      pvVar1 = (void *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
      if ((pvVar1 != pvVar2) &&
         (pDVar3 = param_1->field0_0x0 +
                   (((long)*(int *)(param_1->field0_0x0 + 0xc) * 8 + 0x10) - (long)pvVar2),
         0 < (long)pDVar3)) {
        _memcpy(pvVar2,pvVar1,(size_t)pDVar3);
      }
    }
  }
  return param_1;
}

