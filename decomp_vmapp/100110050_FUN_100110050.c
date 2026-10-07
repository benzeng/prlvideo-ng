
void FUN_100110050(undefined8 *param_1)

{
  string *this;
  long lVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_100ba9600;
  FUN_1006827c0((long)param_1 + 0xc);
  pQVar2 = (QArrayData *)param_1[0x53];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1001100f8;
      pQVar2 = (QArrayData *)param_1[0x53];
    }
    lVar1 = (long)*(int *)(pQVar2 + 4) << 5;
    if (lVar1 != 0) {
      this = (string *)(pQVar2 + *(long *)(pQVar2 + 0x10) + 8);
      do {
        std::string::~string(this);
        this = this + 0x20;
        lVar1 = lVar1 + -0x20;
      } while (lVar1 != 0);
    }
    QArrayData::deallocate(pQVar2,0x20,8);
  }
LAB_1001100f8:
  FUN_1000c5300(param_1 + 0x26);
  QMutex::~QMutex((QMutex *)(param_1 + 0x25));
  QMutex::~QMutex((QMutex *)(param_1 + 0x24));
  QMutex::~QMutex((QMutex *)(param_1 + 0x23));
  QMutex::~QMutex((QMutex *)(param_1 + 0x22));
  QMutex::~QMutex((QMutex *)(param_1 + 0x21));
  QMutex::~QMutex((QMutex *)(param_1 + 0x20));
  QMutex::~QMutex((QMutex *)(param_1 + 0x1f));
  QMutex::~QMutex((QMutex *)(param_1 + 0x1e));
  QMutex::~QMutex((QMutex *)(param_1 + 0x1d));
  QMutex::~QMutex((QMutex *)(param_1 + 0x1c));
  QMutex::~QMutex((QMutex *)(param_1 + 0x1b));
  QMutex::~QMutex((QMutex *)(param_1 + 0x1a));
  QMutex::~QMutex((QMutex *)(param_1 + 0x19));
  QMutex::~QMutex((QMutex *)(param_1 + 0x18));
  QMutex::~QMutex((QMutex *)(param_1 + 0x17));
  QMutex::~QMutex((QMutex *)(param_1 + 0x16));
  QMutex::~QMutex((QMutex *)(param_1 + 0x15));
  QMutex::~QMutex((QMutex *)(param_1 + 0x14));
  QMutex::~QMutex((QMutex *)(param_1 + 0x13));
  QMutex::~QMutex((QMutex *)(param_1 + 0x12));
  QMutex::~QMutex((QMutex *)(param_1 + 0x11));
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  QMutex::~QMutex((QMutex *)(param_1 + 0xf));
  QMutex::~QMutex((QMutex *)(param_1 + 0xe));
  QMutex::~QMutex((QMutex *)(param_1 + 0xd));
  QMutex::~QMutex((QMutex *)(param_1 + 0xc));
  QMutex::~QMutex((QMutex *)(param_1 + 0xb));
  QMutex::~QMutex((QMutex *)(param_1 + 10));
  QMutex::~QMutex((QMutex *)(param_1 + 9));
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  QMutex::~QMutex((QMutex *)(param_1 + 7));
  QMutex::~QMutex((QMutex *)(param_1 + 6));
  FUN_100682820((long)param_1 + 0xc);
  return;
}

