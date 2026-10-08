
undefined8 FUN_1003058b0(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 - 0x3aadU < 0x37) &&
     ((0x40000000000007U >> ((ulong)(param_2 - 0x3aadU) & 0x3f) & 1) != 0)) {
    return 0x72;
  }
  uVar1 = CMessageDataProvider::getHelpTopicByErrCode(param_1);
  return uVar1;
}

