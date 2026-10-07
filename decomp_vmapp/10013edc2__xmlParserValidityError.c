
void _xmlParserValidityError(void *ctx,char *msg,...)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x00010013ee2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_10013ee4c + (ulong)in_AL * -4))(ctx,msg,&LAB_10013ee4c + (ulong)in_AL * -4);
  return;
}

