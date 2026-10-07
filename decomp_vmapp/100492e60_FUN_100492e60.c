
undefined8
FUN_100492e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100488f00(param_4,&local_28,0x1800);
  lVar2 = FUN_1002a6010(param_4);
  iVar1 = -0x7ffcbffc;
  if (lVar2 == 0) {
LAB_100492eb0:
    QString::toUtf8();
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Failed to freeze FS: %s",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100493030;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  else {
    if (*(int *)(lVar2 + 0x10) != 4) goto LAB_10049303a;
    iVar1 = *(int *)(lVar2 + 0x2c);
    if (iVar1 != 0) goto LAB_100492eb0;
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"FS was successfully freezed.");
    QString::toUtf8();
    if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f)
      ;
    }
    pcVar3 = _strstr((char *)(local_38 + *(long *)(local_38 + 0x10)),"PID=");
    if (pcVar3 != (char *)0x0) {
      iVar1 = _sscanf(pcVar3 + 4,"%d\n",&DAT_1011bbff4);
      if ((iVar1 == 1) && (0 < DAT_1011bbff4)) {
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Freeze PID=%d\n");
      }
      else {
        piVar4 = ___error();
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Parse PID error: err=%d\n",*piVar4);
      }
    }
    iVar1 = 0;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100493030;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_100493030:
  FUN_100484e00(param_1,iVar1);
LAB_10049303a:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return 0;
}

