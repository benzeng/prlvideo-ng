
long * FUN_1000d73b0(long *param_1,long *param_2)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = *param_2;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_hostHwInfo","HostHwInfoWrap.cpp"
                  ,0x22,"GetHostHwInfo");
    lVar1 = *param_2;
    *param_1 = lVar1;
    if (lVar1 == 0) goto LAB_1000d743a;
  }
  else {
    *param_1 = lVar1;
  }
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
LAB_1000d743a:
  QMutex::unlock();
  return param_1;
}

