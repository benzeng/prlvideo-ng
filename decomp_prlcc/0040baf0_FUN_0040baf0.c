
bool FUN_0040baf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_48;
  int iStack_44;
  undefined8 local_40;
  undefined4 local_38;
  int iStack_34;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  local_48 = 0x8230;
  iStack_44 = -1;
  local_40 = 8;
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != 0) && ((param_1 == 0 || (param_1 == 3)))) {
    local_30 = &local_18;
    local_18 = 5;
    local_40 = 0x10008;
    local_28 = 0x10;
  }
  _local_38 = CONCAT44(param_1,3);
  iVar1 = FUN_0040bac0(&local_48);
  return iVar1 == 0 && iStack_44 == 0;
}

