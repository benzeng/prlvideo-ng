
void FUN_1000e1770(long *param_1,string *param_2,string *param_3)

{
  long lVar1;
  string *psVar2;
  long lVar3;
  string *psVar4;
  ulong uVar5;
  string *this;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar5 = ((long)param_3 - (long)param_2 >> 3) * -0x5555555555555555;
  psVar2 = (string *)*param_1;
  lVar1 = param_1[2];
  lVar3 = lVar1 - (long)psVar2 >> 3;
  if (uVar5 < (ulong)(lVar3 * -0x5555555555555555) || uVar5 + lVar3 * 0x5555555555555555 == 0) {
    lVar1 = param_1[1] - (long)psVar2 >> 3;
    bVar7 = uVar5 < (ulong)(lVar1 * -0x5555555555555555);
    bVar8 = uVar5 + lVar1 * 0x5555555555555555 == 0;
    psVar4 = param_3;
    if (!bVar7 && !bVar8) {
      psVar4 = param_2 + lVar1 * 8;
    }
    if (psVar4 != param_2) {
      lVar1 = -0x18 - (long)param_2;
      this = psVar2;
      do {
        std::string::operator=(this,param_2);
        param_2 = param_2 + 0x18;
        this = this + 0x18;
      } while (psVar4 != param_2);
      psVar2 = psVar2 + ((ulong)(psVar4 + lVar1) / 0x18) * 0x18 + 0x18;
    }
    if (bVar7 || bVar8) {
      while ((string *)param_1[1] != psVar2) {
        psVar4 = (string *)param_1[1] + -0x18;
        param_1[1] = (long)psVar4;
        std::string::~string(psVar4);
      }
    }
    else if (psVar4 != param_3) {
      psVar2 = (string *)param_1[1];
      do {
        std::string::string(psVar2,psVar4);
        psVar4 = psVar4 + 0x18;
        psVar2 = (string *)(param_1[1] + 0x18);
        param_1[1] = (long)psVar2;
      } while (param_3 != psVar4);
    }
  }
  else {
    if (psVar2 != (string *)0x0) {
      while ((string *)param_1[1] != psVar2) {
        psVar4 = (string *)param_1[1] + -0x18;
        param_1[1] = (long)psVar4;
        std::string::~string(psVar4);
      }
      operator_delete((void *)*param_1);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      lVar1 = 0;
    }
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = 0xaaaaaaaaaaaaaaa;
    if ((ulong)((lVar1 >> 3) * -0x5555555555555555) < 0x555555555555555) {
      uVar6 = (lVar1 >> 3) * 0x5555555555555556;
      if ((uVar6 < uVar5) && (uVar6 = uVar5, 0xaaaaaaaaaaaaaaa < uVar5)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    psVar2 = operator_new(uVar6 * 0x18);
    param_1[1] = (long)psVar2;
    *param_1 = (long)psVar2;
    param_1[2] = (long)(psVar2 + uVar6 * 0x18);
    for (; param_2 != param_3; param_2 = param_2 + 0x18) {
      std::string::string(psVar2,param_2);
      psVar2 = (string *)(param_1[1] + 0x18);
      param_1[1] = (long)psVar2;
    }
  }
  return;
}

