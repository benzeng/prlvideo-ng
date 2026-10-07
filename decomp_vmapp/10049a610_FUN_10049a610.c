
void FUN_10049a610(undefined8 *param_1,long *param_2)

{
  string *psVar1;
  long lVar2;
  string *this;
  ulong uVar3;
  string *psVar4;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar3 = param_2[1] - *param_2;
  if (uVar3 != 0) {
    lVar2 = param_2[1] - *param_2 >> 3;
    if (0xaaaaaaaaaaaaaaa < (ulong)(lVar2 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    this = operator_new(uVar3);
    param_1[1] = this;
    *param_1 = this;
    param_1[2] = this + lVar2 * 8;
    psVar1 = (string *)param_2[1];
    for (psVar4 = (string *)*param_2; psVar4 != psVar1; psVar4 = psVar4 + 0x18) {
      std::string::string(this,psVar4);
      this = (string *)(param_1[1] + 0x18);
      param_1[1] = this;
    }
  }
  return;
}

