
undefined8 FUN_10028ec80(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  QArrayData *local_38;
  undefined1 local_2a;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get local server");
    uVar2 = 0x80000009;
  }
  else {
    uVar2 = FUN_10016f500(lVar3);
    cVar1 = FUN_10061c170(uVar2);
    uVar2 = 0x3bfa;
    if (cVar1 != '\0') {
      if (DAT_102310958 == (void *)0x0) {
        pvVar4 = operator_new(0x18);
        FUN_100612710(pvVar4);
        DAT_102271170 = 1;
        DAT_102310958 = pvVar4;
      }
      pvVar4 = DAT_102310958;
      FUN_10015a2b0(&local_38,lVar3);
      uVar2 = 0;
      FUN_100612b70(pvVar4,&local_38,0,2);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (*(int *)local_38 != 0) {
            return 0;
          }
          local_2a = 0;
        }
        QArrayData::deallocate(local_38,2,8);
      }
    }
  }
  return uVar2;
}

