
undefined8 * FUN_1006e18b0(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_100ba2188;
  pcVar1 = "Library/Logs/CrashReporter";
  if (9 < *(int *)PTR_MacintoshVersion_100ba2170) {
    pcVar1 = "Library/Logs/DiagnosticReports";
  }
  local_38 = (QArrayData *)
             QString::fromAscii_helper
                       (pcVar1,(uint)(9 < *(int *)PTR_MacintoshVersion_100ba2170) * 4 + 0x1a);
  if ((*(int *)(*param_2 + 4) == 0) &&
     (FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","!sRootDir.isEmpty()",
                    "ParallelsDirs.cpp",0x4de,"prepareMacOSCrashPathsList"),
     *(int *)(*param_2 + 4) == 0)) goto LAB_1006e1a3b;
  local_50 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_48,&local_50,param_2,0,0x20);
  QString::arg(&local_40,&local_48,&local_38,0,0x20);
  FUN_10000c490(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e19db;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006e19db:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e1a0b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e1a0b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e1a3b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006e1a3b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

