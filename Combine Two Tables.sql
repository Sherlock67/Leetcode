
#two table ->person personId(pk)
#          ->Address personId(fk)
#                    addressId(pk)
#                    2 table data show based on personId
                    
select firstName,lastName,city,state from Person left join Address
on Person.personId = Address.personId;
