
undefined8 FUN_100030f60(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  uVar1 = *(undefined8 *)(DAT_1011c3698 + 0xf0);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  iVar3 = FUN_1000ec2a0();
  uVar4 = 0xffffffff;
  if (((((iVar3 != 0) && (iVar3 = FUN_1000ec3b0(&local_2c,4,&local_24,0), iVar3 != 0)) &&
       (local_24 != 0)) &&
      ((local_2c - 1 < 2 && (iVar3 = FUN_1000ec3b0(&local_28,4,&local_24,0), iVar3 != 0)))) &&
     (local_24 != 0)) {
    if ((1 < local_2c) && (iVar3 = FUN_1000ec3b0(&local_30,4,&local_24,0), iVar3 == 0)) {
      return 0xffffffff;
    }
    iVar3 = FUN_1000ec640();
    lVar2 = DAT_1011c35c8;
    if (iVar3 != 0) {
      if (DAT_1011c35c8 == 0) {
        FUN_100430130(uVar1,local_28);
        FUN_100435fa0(uVar1,local_30);
        uVar4 = 0;
      }
      else {
        QMutex::lock();
        *(int *)(lVar2 + 0x44) = local_28;
        *(undefined4 *)(lVar2 + 0x50) = local_30;
        *(undefined4 *)(lVar2 + 0x284) = 0;
        QMutex::unlock();
        FUN_100430130(uVar1,local_28);
        FUN_100435fa0(uVar1,local_30);
        uVar4 = 0;
        FUN_100030610(lVar2,0,0x20,local_28 != 0);
      }
    }
  }
  return uVar4;
}

