
void FUN_1000e2970(long *param_1,string *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  string *this;
  void *pvVar5;
  string *this_00;
  string *psVar6;
  
  lVar4 = *param_1;
  uVar3 = (param_1[1] - lVar4 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = param_1[2] - lVar4 >> 3;
  if ((ulong)(lVar1 * -0x5555555555555555) < 0x555555555555555) {
    uVar2 = lVar1 * 0x5555555555555556;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
    lVar4 = (param_1[1] - lVar4 >> 3) * -0x5555555555555555;
    uVar3 = 0;
    pvVar5 = (void *)0x0;
    if (uVar2 == 0) goto LAB_1000e2a31;
  }
  else {
    lVar4 = (param_1[1] - lVar4 >> 3) * -0x5555555555555555;
    uVar2 = 0xaaaaaaaaaaaaaaa;
  }
  uVar3 = uVar2;
  pvVar5 = operator_new(uVar3 * 0x18);
LAB_1000e2a31:
  this_00 = (string *)((long)pvVar5 + lVar4 * 0x18);
  std::string::string(this_00,param_2);
  psVar6 = (string *)*param_1;
  this = (string *)param_1[1];
  if (this != psVar6) {
    do {
      this = this + -0x18;
      std::string::string(this_00 + -0x18,this);
      this_00 = this_00 + -0x18;
    } while (psVar6 != this);
    psVar6 = (string *)*param_1;
    this = (string *)param_1[1];
  }
  *param_1 = (long)this_00;
  param_1[1] = (long)pvVar5 + lVar4 * 0x18 + 0x18;
  param_1[2] = (long)((long)pvVar5 + uVar3 * 0x18);
  while (this != psVar6) {
    this = this + -0x18;
    std::string::~string(this);
  }
  if (psVar6 == (string *)0x0) {
    return;
  }
  operator_delete(psVar6);
  return;
}

