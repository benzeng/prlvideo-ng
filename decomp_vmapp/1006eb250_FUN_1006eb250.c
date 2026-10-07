
QString * FUN_1006eb250(QString *param_1,long *param_2,undefined4 param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((*(int *)(*param_2 + 4) == 0) &&
     (FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","!sBaseDir.isEmpty()",
                    "ParallelsDirs.cpp",0xab9,"getVmActionScriptPath"), *(int *)(*param_2 + 4) == 0)
     ) {
    pQVar1 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
switchD_1006eb2de_default:
    param_1->field0_0x0 = pQVar1;
  }
  else {
    pQVar1 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    switch(param_3) {
    case 0:
      FUN_1006eb0e0(&local_50,param_2);
      param_1->field0_0x0 = local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_48,0xae9998);
      QString::append(param_1);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006eb355;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1006eb355:
      if (*(int *)local_50.field0_0x0 == -1) {
        return param_1;
      }
      local_68.field0_0x0 = local_50.field0_0x0;
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_50.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      break;
    case 1:
      FUN_1006eb0e0(&local_58,param_2);
      param_1->field0_0x0 = local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0xae99a2);
      QString::append(param_1);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_21 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006eb412;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1006eb412:
      if (*(int *)local_58.field0_0x0 == -1) {
        return param_1;
      }
      local_68.field0_0x0 = local_58.field0_0x0;
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_58.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      break;
    case 2:
      FUN_1006eb0e0(&local_60,param_2);
      param_1->field0_0x0 = local_60.field0_0x0;
      if (1 < *(int *)local_60.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_38,0xae99ad);
      QString::append(param_1);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_21 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006eb4b9;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_1006eb4b9:
      if (*(int *)local_60.field0_0x0 == -1) {
        return param_1;
      }
      local_68.field0_0x0 = local_60.field0_0x0;
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_60.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      break;
    case 3:
      FUN_1006eb0e0(&local_68,param_2);
      param_1->field0_0x0 = local_68.field0_0x0;
      if (1 < *(int *)local_68.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_30,0xae99b6);
      QString::append(param_1);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_21 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006eb560;
        }
        QArrayData::deallocate(local_30,2,8);
      }
LAB_1006eb560:
      if (*(int *)local_68.field0_0x0 == -1) {
        return param_1;
      }
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_68.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      break;
    default:
      goto switchD_1006eb2de_default;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
  return param_1;
}

