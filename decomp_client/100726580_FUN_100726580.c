
void FUN_100726580(long param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  char local_49;
  undefined8 local_48;
  int local_40;
  int local_3c;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1003193e0(&local_38,*(undefined8 *)(param_1 + 0x10));
  lVar4 = FUN_1000a9690(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007265dd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007265dd:
  if (lVar4 != 0) {
    uVar5 = FUN_100319c00(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_100328b80(uVar5);
    cVar1 = FUN_1000b78c0(lVar4,uVar3,&local_40);
    if ((cVar1 != '\0') && ((local_40 != 0 || (local_3c != 0)))) {
      local_48 = 0;
      sVar2 = _GetNextProcess(&local_48);
      if (sVar2 == 0) {
        do {
          sVar2 = _SameProcess(&local_48,&local_40,&local_49);
          if ((((sVar2 == 0) && (local_49 != '\x01')) &&
              (sVar2 = _SameProcess(&local_48,&DAT_100e27634,&local_49), sVar2 == 0)) &&
             (local_49 != '\x01')) {
            _ShowHideProcess(&local_48,0);
          }
          sVar2 = _GetNextProcess(&local_48);
        } while (sVar2 == 0);
      }
    }
  }
  return;
}

