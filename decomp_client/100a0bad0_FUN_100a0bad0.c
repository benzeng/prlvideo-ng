
undefined8 FUN_100a0bad0(undefined8 param_1,undefined8 param_2)

{
  QArrayData *local_28;
  undefined1 local_19;
  
  QString::replace(param_2,1,"\\",2,"\\\\",1);
  QString::replace(param_2,1,"\"",2,"\\\"",1);
  QString::replace(param_2,1,"\b",2,"\\b",1);
  QString::replace(param_2,1,"\f",2,"\\f",1);
  QString::replace(param_2,1,"\n",2,"\\n",1);
  QString::replace(param_2,1,"\r",2,"\\r",1);
  QString::replace(param_2,1,"\t",2,"\\t",1);
  local_28 = (QArrayData *)QString::fromLatin1_helper("\"%1\"",4);
  QString::arg(param_1,&local_28,param_2,0,0x20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

