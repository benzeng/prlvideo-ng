
void FUN_1000c5700(long param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 local_44;
  QArrayData *local_40;
  undefined1 local_32;
  
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    pcVar6 = "false";
    if (param_2 != '\0') {
      pcVar6 = "true";
    }
    FUN_100df99c0("SGAC","prl_client_app",3,"Window associated with vmUuid=\"%s\" active=%s",
                  local_40 + *(long *)(local_40 + 0x10),pcVar6);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_32 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_1000c57a1;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1000c57a1:
  if (param_2 != '\0') {
    cVar1 = FUN_1000bd150(param_1);
    if (cVar1 == '\0') {
      FUN_1000c5940(param_1);
    }
    if (DAT_102310928 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_1001d4a60(pvVar3);
      DAT_102273638 = 1;
      DAT_102310928 = pvVar3;
    }
    uVar4 = FUN_1001d4b90(DAT_102310928);
    if (((uVar4 & 2) != 0) && ((*(int *)(param_1 + 0x21c) != 0 || (*(int *)(param_1 + 0x218) != 0)))
       ) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",3,"need reactivate m_needReactivate=%d",
                      *(undefined4 *)(param_1 + 0x254));
      }
      if (*(int *)(param_1 + 0x254) == 2) {
        *(undefined4 *)(param_1 + 0x254) = 0;
      }
      else if (*(int *)(param_1 + 0x254) == 0) {
        *(undefined4 *)(param_1 + 0x254) = 1;
        local_44 = 0;
        FUN_1000c4970((int *)(param_1 + 0x218),0x68,&local_44,4);
      }
    }
  }
  *(char *)(param_1 + 0x251) = param_2;
  if (2 < DAT_10230ffd0) {
    uVar5 = FUN_1001d50a0();
    uVar2 = FUN_1001d50e0(uVar5);
    FUN_100df99c0("SGAC","prl_client_app",3,"active=%d pdActide=%d m_wasActive=%d",param_2,uVar2,
                  *(undefined1 *)(param_1 + 0x251));
  }
  return;
}

