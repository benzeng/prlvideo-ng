
void FUN_100ad4d20(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_38;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar3 = FUN_100319bf0(*(undefined8 *)(param_1 + 0x20));
  local_28 = (QArrayData *)QString::fromAscii_helper("parallels.ModernMix.guest.win",0x1d);
  lVar4 = FUN_10032d8b0(uVar3,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100ad4d8e;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100ad4d8e:
  if (lVar4 != 0) {
    FUN_10032ca00(&local_30,lVar4);
    if (local_30 == 0) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrToolClient",2,
                      "Invalid TIS record handle. Unable to retrieve ModernMix state.");
      }
    }
    else {
      _PrlHandle_Free();
      iVar2 = FUN_10032c830(lVar4);
      if (iVar2 == 1) {
        FUN_10032cd60(&local_38,lVar4,0);
        if (((0x17 < *(int *)(local_38 + 4)) &&
            (*(int *)(local_38 + *(long *)(local_38 + 0x10)) == 3)) &&
           (*(char *)(param_1 + 0xae0) == '\0')) {
          *(undefined1 *)(param_1 + 0xae0) = 1;
          cVar1 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
          if (cVar1 != '\0') {
            FUN_100ad3cf0(param_1);
          }
        }
        if (*(int *)local_38 != -1) {
          if (*(int *)local_38 != 0) {
            LOCK();
            *(int *)local_38 = *(int *)local_38 + -1;
            UNLOCK();
            if (*(int *)local_38 != 0) {
              return;
            }
            local_19 = 0;
          }
          QArrayData::deallocate(local_38,1,8);
        }
      }
      else {
        iVar2 = FUN_10032c830(lVar4);
        if ((iVar2 == 2) && (*(char *)(param_1 + 0xae0) != '\0')) {
          *(undefined1 *)(param_1 + 0xae0) = 0;
          cVar1 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
          if (cVar1 != '\0') {
            FUN_100ad3cf0(param_1);
          }
        }
      }
    }
  }
  return;
}

