
void FUN_100075830(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 local_50 [24];
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  iVar3 = FUN_100060640();
  if (iVar3 != 0) {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getHomePath();
    cVar2 = FUN_1006f9d10(&local_20);
    uVar1 = DAT_1011c3650;
    if (cVar2 == '\0') {
      local_38 = (void *)0x0;
      pvStack_30 = (void *)0x0;
      local_28 = 0;
      FUN_10006a060(local_50);
      FUN_1000648b0(uVar1,0x1b7,&local_38,local_50);
      FUN_10006a680(local_50);
      if (local_38 != (void *)0x0) {
        if (pvStack_30 != local_38) {
          pvStack_30 = (void *)((~((long)pvStack_30 + (-4 - (long)local_38)) & 0xfffffffffffffffcU)
                               + (long)pvStack_30);
        }
        operator_delete(local_38);
      }
    }
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return;
}

