
undefined8 FUN_100416630(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  byte bVar7;
  int local_3c;
  QArrayData *local_38;
  undefined1 local_2a;
  
  QByteArray::QByteArray((QByteArray *)&local_38,"E0",-1);
  lVar2 = *(long *)(param_1 + 0x668);
  if (*(int *)(lVar2 + 4) < 1) {
    cVar3 = '\0';
  }
  else {
    cVar3 = *(char *)(lVar2 + *(long *)(lVar2 + 0x10));
  }
  local_3c = 0;
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","gdbstub",1,"Receive: \'%s\'",lVar2 + *(long *)(lVar2 + 0x10));
  }
  plVar1 = (long *)(param_1 + 0x668);
  *(char *)(param_1 + 0x634) = cVar3;
  iVar4 = (int)cVar3;
  if (iVar4 < 99) {
    if (iVar4 < 0x3f) {
      if (iVar4 != 3) {
        if (iVar4 == 0x21) {
          uVar5 = 1;
          FUN_100416cc0(param_1);
          goto LAB_100416a5e;
        }
        goto switchD_10041676f_caseD_40;
      }
      iVar4 = FUN_100416dc0(param_1);
      goto LAB_100416a17;
    }
    if (0x4c < iVar4) {
      if (0x59 < iVar4) {
        if (iVar4 == 0x5a) goto switchD_1004167a8_caseD_7a;
switchD_10041676f_caseD_40:
        uVar5 = 0;
        FUN_10041a500(param_1);
        goto LAB_100416a5e;
      }
      switch(iVar4) {
      case 0x4d:
        iVar4 = FUN_100418a80(param_1,plVar1);
        break;
      default:
        goto switchD_10041676f_caseD_40;
      case 0x50:
        iVar4 = FUN_1004173d0(param_1);
        break;
      case 0x53:
        goto switchD_10041686b_caseD_53;
      case 0x54:
        iVar4 = FUN_10041bf50(param_1,plVar1);
      }
      goto LAB_100416a17;
    }
    switch(iVar4) {
    case 0x3f:
      iVar4 = FUN_100416dc0(param_1);
      if (iVar4 != 0) {
        FUN_100416e70(param_1);
      }
      break;
    default:
      goto switchD_10041676f_caseD_40;
    case 0x43:
      QMutex::lock();
      iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
      if (iVar4 == 0) {
        QMutex::unlock();
      }
      else {
        cVar3 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
        QMutex::unlock();
LAB_10041673c:
        uVar5 = 0;
        if (cVar3 != '\0') goto LAB_100416a5e;
      }
      goto LAB_100416a50;
    case 0x44:
      lVar2 = *plVar1;
      if (*(int *)(lVar2 + 4) < 2) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)(*(long *)(lVar2 + 0x10) + 1 + lVar2) == '1';
      }
      iVar4 = FUN_100416360(param_1,bVar6);
      if (iVar4 != 0) {
        uVar5 = 1;
        FUN_100416cc0(param_1);
        goto LAB_100416a5e;
      }
      goto LAB_100416a50;
    case 0x47:
      iVar4 = FUN_1004172e0(param_1);
      break;
    case 0x48:
      iVar4 = FUN_10041b580(param_1,plVar1);
    }
    goto LAB_100416a17;
  }
  if (iVar4 < 0x70) {
    if (iVar4 < 0x6b) {
      if (iVar4 == 99) {
        QMutex::lock();
        iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
        if (iVar4 != 0) {
          cVar3 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
          QMutex::unlock();
          goto LAB_10041673c;
        }
        QMutex::unlock();
      }
      else {
        if (iVar4 != 0x67) goto switchD_10041676f_caseD_40;
        QMutex::lock();
        iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
        if (iVar4 == 0) {
          QMutex::unlock();
        }
        else {
          cVar3 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
          QMutex::unlock();
          if (cVar3 != '\0') {
            uVar5 = 1;
            FUN_1004170c0(param_1);
            goto LAB_100416a5e;
          }
        }
      }
      goto LAB_100416a50;
    }
    if (iVar4 == 0x6b) {
      uVar5 = 1;
      (**(code **)(*(long *)(*(long *)(param_1 + 0x660) + 0x18) + 0x70))
                (*(long *)(param_1 + 0x660) + 0x18);
      goto LAB_100416a5e;
    }
    if (iVar4 != 0x6d) goto switchD_10041676f_caseD_40;
    iVar4 = FUN_1004185f0(param_1,plVar1);
    goto LAB_100416a17;
  }
  switch(iVar4) {
  case 0x70:
    QMutex::lock();
    iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
    bVar7 = 0;
    if (iVar4 != 0) {
      bVar7 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
    }
    QMutex::unlock();
    if (bVar7 != 0) {
      FUN_1004181e0(param_1,plVar1);
    }
    bVar7 = bVar7 ^ 1;
    goto LAB_100416a1d;
  case 0x71:
    iVar4 = FUN_10041a5c0(param_1,plVar1);
    break;
  default:
    goto switchD_10041676f_caseD_40;
  case 0x73:
switchD_10041686b_caseD_53:
    iVar4 = FUN_1004184a0(param_1);
    break;
  case 0x76:
    iVar4 = FUN_10041caf0(param_1,plVar1,&local_3c);
    bVar7 = iVar4 == 0;
    if ((local_3c != 0) && (uVar5 = 0, !(bool)bVar7)) goto LAB_100416a5e;
    goto LAB_100416a1d;
  case 0x7a:
switchD_1004167a8_caseD_7a:
    iVar4 = FUN_10041b9b0(param_1,plVar1);
  }
LAB_100416a17:
  bVar7 = iVar4 == 0;
LAB_100416a1d:
  uVar5 = 1;
  if (bVar7 != 0) {
LAB_100416a50:
    uVar5 = 0;
    FUN_100419170(param_1,&local_38);
  }
LAB_100416a5e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar5;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar5;
}

