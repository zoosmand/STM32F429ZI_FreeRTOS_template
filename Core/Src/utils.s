.syntax unified

.global Delay
.global Set_BitBandVal
.global Get_BitBandVal


    .section  .text.Delay
    .type Delay, %function
Delay:
  ldr r1, =5320
  mul r0, r0, r1
  _LOOP_:
    subs r0, r0, 1
    bpl _LOOP_
  bx lr
  .size  Delay, .-Delay


    .section  .text.Set_BitBandVal
    .type Set_BitBandVal, %function
Set_BitBandVal:
  str r1, [r0]
  bx lr
  .size  Set_BitBandVal, .-Set_BitBandVal


    .section  .text.Get_BitBandVal
    .type Get_BitBandVal, %function
Get_BitBandVal:
  ldr r0, [r0]
  bx lr
  .size  Get_BitBandVal, .-Get_BitBandVal
