
void FUN_1004de380(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (param_1[6] != 0) {
    lVar4 = FUN_1003b0a30(param_1[8]);
    if (lVar4 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    }
    (**(code **)(*param_1 + 0x200))(param_1);
    lVar4 = param_1[6];
    uVar5 = FUN_1003b0ad0(param_1[8]);
    cVar2 = FUN_1003e5e80(uVar5);
    if (cVar2 == '\0') {
      lVar6 = FUN_1003b0a30(param_1[8]);
      if (lVar6 == 0) {
        bVar1 = false;
      }
      else {
        uVar5 = FUN_1003b0a30(param_1[8]);
        iVar3 = FUN_10018a9d0(uVar5);
        if (iVar3 == 0x30000001) {
          uVar5 = FUN_1003b0a30(param_1[8]);
          cVar2 = FUN_10018da50(uVar5);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            uVar5 = FUN_1003b0a30(param_1[8]);
            iVar3 = FUN_10018a9d0(uVar5);
            if (iVar3 == 0x30000001) {
              uVar5 = FUN_1003b0af0(param_1[8]);
              local_40 = (QArrayData *)
                         QString::fromAscii_helper("Hardware.HibernateState.ShutdownReason",0x26);
              FUN_1003e1800(&local_38,uVar5,&local_40,0);
              QVariant::toInt((bool *)&local_38);
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
        }
        else {
          bVar1 = false;
        }
      }
    }
    else {
      bVar1 = false;
    }
    QWidget::setDisabled(SUB81(lVar4,0));
    if (bVar1) {
      QVariant::~QVariant(&local_38);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return;
          }
          local_21 = 0;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
  }
  return;
}

