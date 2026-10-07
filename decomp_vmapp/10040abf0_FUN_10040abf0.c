
void FUN_10040abf0(void)

{
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = DAT_100b40a04;
  local_20 = DAT_100b409fc;
  local_28 = DAT_100b40a10;
  local_30 = DAT_100b40a08;
  _AudioObjectRemovePropertyListener(1,&local_20,FUN_10040aac0,1);
  _AudioObjectRemovePropertyListener(1,&local_30,FUN_10040aac0,0);
  return;
}

