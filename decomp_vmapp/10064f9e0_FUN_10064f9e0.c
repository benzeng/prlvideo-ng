
QListData * FUN_10064f9e0(QListData *param_1,long *param_2)

{
  void *pvVar1;
  uint *puVar2;
  void *pvVar3;
  size_t sVar4;
  
  if (*(int *)(*param_2 + 0xc) != *(int *)(*param_2 + 8)) {
    puVar2 = *(uint **)param_1;
    if (puVar2[3] == puVar2[2]) {
      FUN_100650880(param_1,param_2);
    }
    else {
      if (*puVar2 < 2) {
        pvVar3 = (void *)QListData::append(param_1);
      }
      else {
        pvVar3 = (void *)FUN_1006509a0(param_1,0x7fffffff);
      }
      pvVar1 = (void *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
      if ((pvVar1 != pvVar3) &&
         (sVar4 = (*(long *)param_1 + 0x10 + (long)*(int *)(*(long *)param_1 + 0xc) * 8) -
                  (long)pvVar3, 0 < (long)sVar4)) {
        _memcpy(pvVar3,pvVar1,sVar4);
      }
    }
  }
  return param_1;
}

