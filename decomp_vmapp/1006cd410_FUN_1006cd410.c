
long FUN_1006cd410(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QString local_58;
  QHostAddress local_50 [8];
  QString local_48;
  QHostAddress local_40 [15];
  undefined1 local_31;
  
  lVar2 = _CFArrayGetCount();
  if (0 < lVar2) {
    lVar2 = 0;
    do {
      lVar3 = _CFArrayGetValueAtIndex(param_1,lVar2);
      lVar4 = _CFStringGetTypeID();
      if ((((lVar3 != 0) && (lVar5 = _CFGetTypeID(lVar3), lVar5 == lVar4)) &&
          (lVar4 = _CFStringGetTypeID(), param_2 != 0)) &&
         (lVar5 = _CFGetTypeID(param_2), lVar5 == lVar4)) {
        FUN_1006cc540(&local_48,lVar3);
        QHostAddress::QHostAddress(local_40,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006cd4f4;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_1006cd4f4:
        FUN_1006cc540(&local_58,param_2);
        QHostAddress::QHostAddress(local_50,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006cd53f;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_1006cd53f:
        cVar1 = QHostAddress::operator==(local_40,local_50);
        QHostAddress::~QHostAddress(local_50);
        QHostAddress::~QHostAddress(local_40);
        if (cVar1 != '\0') {
          return lVar2;
        }
      }
      lVar2 = lVar2 + 1;
      lVar3 = _CFArrayGetCount(param_1);
    } while (lVar2 < lVar3);
  }
  return -1;
}

