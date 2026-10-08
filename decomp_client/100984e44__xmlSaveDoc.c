
undefined8 _xmlSaveDoc(long param_1,long param_2)

{
  undefined8 local_30;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_30 = 0xffffffffffffffff;
  }
  else {
    FUN_100983424(param_1,param_2);
    local_30 = 0;
  }
  return local_30;
}

