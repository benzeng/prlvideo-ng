
void FUN_100685f00(long param_1)

{
  char *pcVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  
  FUN_1008e3970("","dimg",0,"CDiskImageBase:");
  if (*(char *)(param_1 + 0x48) == '\0') {
    pcVar1 = "no";
  }
  else {
    pcVar1 = "yes";
  }
  FUN_1008e3970("","dimg",0,"Opened correctly: %s",pcVar1);
  FUN_1008e3970("","dimg",0,"File abstractor: %p",*(undefined8 *)(param_1 + 8));
  QString::toUtf8();
  FUN_1008e3970("","dimg",0,"File name: %s",local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100685fdd;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100685fdd:
  FUN_1008e3970("","dimg",0,"Disk open flags: 0x%X",*(undefined4 *)(param_1 + 0x18));
  FUN_1008e3970("","dimg",0,"Parent class/object: %p",*(undefined8 *)(param_1 + 0x40));
  FUN_1008e3970("","dimg",0,"Data area: start = %llu bytes, end = %llu bytes",
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  FUN_1008e3970("","dimg",0,"m_Parameters (IDiskImage::Parameters):");
  FUN_1008e3970("","dimg",0,"   Size of HDD: %llu sectors",*(undefined8 *)(param_1 + 0x20));
  FUN_1008e3970("","dimg",0,"   Size of block: %u sectors",*(undefined4 *)(param_1 + 0x28));
  FUN_1008e3970("","dimg",0,"   Image type: %u",*(undefined4 *)(param_1 + 0x2c));
  QString::toUtf8();
  FUN_1008e3970("","dimg",0,"   File name: %s",local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return;
}

