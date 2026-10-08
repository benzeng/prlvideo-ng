
void FUN_1001c5300(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"AppleRemote: page=0x%08x, usage=0x%08x, value=%i",param_1,
                  param_2,param_3);
  }
  if (param_1 == 0xc) {
    if (param_2 != 0xcd) {
      return;
    }
switchD_1001c5387_caseD_89:
    uVar3 = 1;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    switch(param_2) {
    case 0x86:
      uVar3 = 6;
      break;
    default:
      goto switchD_1001c5387_caseD_87;
    case 0x89:
      goto switchD_1001c5387_caseD_89;
    case 0x8a:
      uVar3 = 2;
      break;
    case 0x8b:
      uVar3 = 3;
      break;
    case 0x8c:
      uVar3 = 4;
      break;
    case 0x8d:
      uVar3 = 5;
    }
  }
  if (param_3 == 0) {
    uVar1 = FUN_100060bb0();
    FUN_1000609c0(uVar1);
    QObject::property((char *)&local_40);
    QVariant::toString();
    QVariant::~QVariant(&local_40);
    uVar1 = FUN_100152280();
    lVar2 = FUN_1001548f0(uVar1,&local_30);
    if (lVar2 != 0) {
      uVar1 = FUN_10018c280(lVar2);
      uVar1 = FUN_100319c40(uVar1);
      FUN_10032eb10(uVar1,uVar3,0);
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
switchD_1001c5387_caseD_87:
  return;
}

