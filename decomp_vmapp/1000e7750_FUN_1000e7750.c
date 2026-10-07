
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e7750(void)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = QIODevice::isOpen();
  if (cVar2 != '\0') {
    QTime::start();
    FUN_1000e36d0(&DAT_1011b6d10);
    lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
    cVar2 = (**(code **)(DAT_1011b6d10 + 0x88))(&DAT_1011b6d10,0);
    if (cVar2 != '\0') {
      QIODevice::write((char *)&DAT_1011b6d10,lVar1 + 0xa0d8);
    }
    FUN_1000e84c0(&DAT_1011c3778,DAT_1011c3780);
    _DAT_1011c3788 = 0;
    DAT_1011c3778 = &DAT_1011c3780;
    DAT_1011c3780 = 0;
    DAT_1011b6d28 = 0;
    cVar2 = QIODevice::isOpen();
    if (cVar2 != '\0') {
      (**(code **)(DAT_1011b6d10 + 0x70))(&DAT_1011b6d10);
    }
    uVar3 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","NVRAM",uVar3);
  }
  return;
}

