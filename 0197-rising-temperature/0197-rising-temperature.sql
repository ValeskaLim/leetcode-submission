SELECT y.id from weather x
left join weather y on DATEDIFF(y.recorddate,x.recorddate)=1
where y.temperature > x.temperature